long long sumBitDifferences(int arr[], int n) {
	    long long ans=0;
	    for(int i=31;i>=0;i--)
	    {
	        long long zc=0,oc=0;
	        for(auto it=0;it<n;it++)
	        {
	            if(((1<<i)&arr[it])>0) zc++;
	            else oc++;
	        }
	        ans=ans+2*(zc*oc);
	    }
	    return ans;
	}