int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int i=0,j=1;
        while(j<n and i<n)
        {
            int dif=abs(arr[i]-arr[j]);
            if(dif==x and i!=j) return 1;
            else if(dif<x) j++;
            else if(dif>x) i++;
            if(i==j) j++;
        }
        return -1;
        
    }
