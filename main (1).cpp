int sol(int i,int j,string s,string t)
    {
        if(i<0) return 0;
        if(j<0) return 1;
        if(s[i-1]==t[j-1]) return sol(i-1,j-1,s,t)+sol(i-1,j,s,t);
        else return sol(i-1,j,s,t);
    }
    int subsequenceCount(string s, string t)
    {
          int mod=1e9+7;
          int n=s.size();
          int m=t.size();
          vector<vector<int>>dp(n+1,vector<int>(m+1,0));
          for(int i=0;i<=m;i++) dp[0][i]=0;
          for(int i=0;i<=n;i++) dp[i][0]=1;
          for(int i=1;i<=n;i++)
          {
              for(int j=1;j<=m;j++)
              {
                  if(s[i-1]==t[j-1])
                  {
                      dp[i][j]=(dp[i-1][j-1]%mod+dp[i-1][j]%mod)%mod;
                  }
                  else{
                      dp[i][j]=dp[i-1][j]%mod;
                  }
              }
          }
        //   return sol(n,m,s,t);
        return dp[n][m];
    }