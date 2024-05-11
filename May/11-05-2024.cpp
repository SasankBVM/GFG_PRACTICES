int sol(int n,vector<int>&ans)
    {
        if(n==1)
        {
            return n;
        }
        if(n%2==1)
        {
            int comp=floor(pow(n,1.5));
            ans.push_back(comp);
            return sol(comp,ans);
        }
        else{
            int comp=floor(pow(n,0.5));
            ans.push_back(comp);
            return sol(comp,ans);
        }
    }
    vector<int> jugglerSequence(int n) {
        vector<int>ans;
        ans.push_back(n);
        sol(n,ans);
        return ans;
        
    }
