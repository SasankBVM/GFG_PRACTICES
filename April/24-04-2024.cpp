long mod=1e9+7;
    int sol(int i,int j,vector<vector<int>>&dp)
    {
        if(i<0||j<0) return 0;
        if(i==0 and j==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=(sol(i-1,j,dp)%mod+sol(i,j-1,dp)%mod)%mod;
    }
    int ways(int x, int y)
    {
        vector<vector<int>>dp(x+1,vector<int>(y+1,-1));
        return sol(x,y,dp)%mod;
    }
