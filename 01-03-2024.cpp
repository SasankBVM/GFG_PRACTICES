int peakElement(int arr[], int n)
    {
       int l=0,h=n-1;
       if(n==1) return arr[0];
       while(l<=h)
       {
           int mid=(l+h)>>1;
           if(mid-1>=0 and mid+1<n)
           {
               if(arr[mid]>=arr[mid+1] and arr[mid]>=arr[mid-1]) return mid;
           }
           else if(mid==0)
           {
               if(arr[mid]>=arr[mid+1]) return mid;
           }
           else if(mid==n-1)
           {
               if(arr[mid]>=arr[mid-1]) return mid;
           }
            if(arr[mid]<=arr[mid+1]) l=mid+1;
            else h=mid-1;
       }
       return -1;
    }
