bool ck(int n)
    {
        while(n>0)
        {
            int rem=n%10;
            if(rem==4) return true;
            n=n/10;
        }
        return false;
    }
    int countNumberswith4(int n) {
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(ck(i)) ans++;
        }
        return ans;
    }
