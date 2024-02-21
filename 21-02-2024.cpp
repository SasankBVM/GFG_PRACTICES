int mod=1003;
    int sol(int i,int j,string&str,bool ist,vector<vector<vector<int>>>&dp)
    {
        if(i>j) return 0;
        if(i==j)
        {
            if(ist) return str[i]=='T';
            else return str[i]=='F';
        }
        if(dp[i][j][ist]!=-1) return dp[i][j][ist];
        int ways=0;
        for(int k=i+1;k<j;k+=2)
        {
            int lt=sol(i,k-1,str,1,dp);
            int lf=sol(i,k-1,str,0,dp);
            int rt=sol(k+1,j,str,1,dp);
            int rf=sol(k+1,j,str,0,dp);
            if(str[k]=='&')
            {
                if(ist)
                {
                    ways=(ways+(lt*rt)%mod)%mod;
                }
                else{
                    ways=(ways+(lt*rf)%mod)%mod;
                    ways=(ways+(lf*rt)%mod)%mod;
                    ways=(ways+(lf*rf)%mod)%mod;
                    
                }
            }
            if(str[k]=='|')
            {
                if(ist){ 
                    ways=(ways+(lt*rf)%mod)%mod;
                    ways=(ways+(lf*rt)%mod)%mod;
                    ways=(ways+(lt*rt)%mod)%mod;
                }
                else{
                    ways=(ways+(lf*rf)%mod)%mod;  
                } 
            }
            if(str[k]=='^')
            {
                if(ist){
                    ways=(ways+(lt*rf)%mod)%mod;
                    ways=(ways+(lf*rt)%mod)%mod;
                } 
                else
                {
                    ways=(ways+(lt*rt)%mod)%mod;
                    ways=(ways+(lf*rf)%mod)%mod;  
                }
            }
        }
        return dp[i][j][ist]=ways%mod;
    }
    int countWays(int n, string s){
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(n,vector<int>(2,-1)));
        return sol(0,n-1,s,1,dp);
    }
