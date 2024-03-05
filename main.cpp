int maxIndexDiff(int a[], int n) 
    { 
        int ans=-1;
        //BRUTE
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i;j<n;j++)
        //     {
        //         if(a[i]<=a[j]) ans=max(ans,(j-i));
        //     }
        // }
        
        for(int i=0;i<n;i++)
        {
            int j=n-1;
            while(i<=j and a[i]>a[j]) j--;
            ans=max(ans,j-i);
        }
        return ans;
    }