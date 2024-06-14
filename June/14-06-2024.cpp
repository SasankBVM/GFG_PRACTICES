string armstrongNumber(int n) {
        int m=n;
        int sum=0;
        while(m>0)
        {
            int rem=m%10;
            m=m/10;
            sum+=(rem*rem*rem);
        }
        if(sum==n) return "true";
        else return "false";
    }
