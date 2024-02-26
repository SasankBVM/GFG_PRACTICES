        int maxp=INT_MIN;
        int sol(int n,vector<int>&dp)
        {
            if(n==0||n==1) return n;
            if(dp[n]!=-1) return dp[n];
            int m1=sol(n/2,dp);
            int m2=sol(n/3,dp);
            int m3=sol(n/4,dp);
            int sum=m1+m2+m3;
            return dp[n]=max(n,sum);
        }
        int maxSum(int n)
        {
            vector<int>dp(n+1,-1);
            return sol(n,dp);
            // return maxp;
        }
