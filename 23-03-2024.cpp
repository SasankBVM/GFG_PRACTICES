vector<int> Series(int n) {
        int mod=1e9+7;
        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++) 
        {
            dp[i]=dp[i-1]%mod+dp[i-2]%mod;
            dp[i]=dp[i]%mod;
        }
        return dp;
    }
