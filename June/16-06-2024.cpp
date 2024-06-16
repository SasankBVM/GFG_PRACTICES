static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.first<b.first;
    }
    vector<int> getPrimes(int n) {
        vector<bool>isp(n+1,true);
        for(int i=2;i*i<=n;i++)
        {
            if(isp[i])
            {
                for(int j=2*i;j<=n;j+=i) isp[j]=false;
            }
        }
        isp[0]=false;
        isp[1]=false;
        vector<pair<int,int>>vec;
        for(int i=2;i<=n;i++)
        {
            if(isp[i])
            {
                int rem=abs(n-i);
                if(isp[rem]) vec.push_back({i,(n-i)});
            }
        }
        if(vec.size()==0)
        {
            return vector<int>{-1,-1};
        }
        sort(vec.begin(),vec.end(),comp);
        vector<int>ans={vec[0].first,vec[0].second};
        return ans;
    }
