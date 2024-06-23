long long ExtractNumber(string str) {

        long long ans=0,pera=0;
        long long fv=1;
        long long n=str.size();
        bool fina=false;
        for(long long i=n-1;i>=0;i--)
        {
            int num=str[i]-'0';
            
            if(num==9)
            {
                fv=1;
                ans=0;
                fina=true;
                continue;
            }
            else if(num>=0 and num<=8)
            {
                if(!fina)
                {
                    ans+=(fv*num);
                    fv=fv*10;
                }
            }
            else{
                if(!fina)
                {
                    if(ans!=0) pera=max(pera,ans);
                    ans=0;
                    fv=1;
                }
                fina=false;
            }
        }
        if(ans!=0) pera=max(pera,ans);
        return (pera!=0)?pera:-1;
        
    }
