int padovanSequence(int n)
    {
       int mod=1e9+7;
       if(n==0||n==1||n==2) return 1;
       vector<int>dp(n+1,0);
       dp[0]=1;
       dp[1]=1;
       dp[2]=1;
       for(int i=3;i<=n;i++)
       {
           dp[i]=(dp[i-2]%mod+dp[i-3]%mod)%mod;
       }
       return dp[n]%mod;
    }
