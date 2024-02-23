int maxProfit(vector<int>&arr){
            int tsc=2;
            int n=arr.size();
            vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
            for(int i=n-1;i>=0;i--)
            {
                for(int buy=0;buy<=1;buy++)
                {
                    for(int tn=1;tn<=2;tn++)
                    {
                        int maxp=0;
                        if(buy)
                        {
                            int prft=-arr[i]+dp[i+1][!buy][tn];
                            prft=max(prft,dp[i+1][buy][tn]);
                            maxp=max(maxp,prft);
                        }
                        else{
                            int prft=arr[i]+dp[i+1][!buy][tn-1];
                            prft=max(prft,dp[i+1][buy][tn]);
                            maxp=max(maxp,prft);
                        }
                        dp[i][buy][tn]=maxp;
                    }
                }
            }
           return dp[0][1][2];
        }