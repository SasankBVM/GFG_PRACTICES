int sol(int i,unordered_set<string>&st,string& str,vector<int>&dp)
    {
        if(i==str.size()) return 1;
        string tmp="";
        if(dp[i]!=-1) return dp[i];
        for(int j=i;j<str.size();j++)
        {
            tmp+=str[j];
            if(st.find(tmp)!=st.end())
            {
                if(sol(j+1,st,str,dp)) return dp[i]= 1;
            }
        }
        return dp[i]=0;
    }
    int wordBreak(string str, vector<string> &words) 
    {
        vector<int>dp(str.size(),-1);
        unordered_set<string>st;
        for(auto it:words) st.insert(it);
        return sol(0,st,str,dp);
    }