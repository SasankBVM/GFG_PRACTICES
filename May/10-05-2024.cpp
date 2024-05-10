void sol(int idx,int k,vector<int>&arr,vector<int>tmp,vector<vector<int>>&ans)
    {
        if(k==0)
        {
            ans.push_back(tmp);
            return;
        }
        if(idx>=arr.size()||k<0) return;
        if(arr[idx]<=k)
        {
            tmp.push_back(arr[idx]);
            sol(idx+1,k-arr[idx],arr,tmp,ans);
            tmp.pop_back();
        }
        while(idx+1<arr.size() and arr[idx]==arr[idx+1]) idx++;
        sol(idx+1,k,arr,tmp,ans);
        
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        vector<int>tmp;
        sol(0,k,arr,tmp,ans);
        return ans;
    }
