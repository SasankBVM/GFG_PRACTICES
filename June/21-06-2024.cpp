string compareFrac(string str) {
        string n1="",d1="",n2="",d2="";
        int sl=0,sc=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]-'0'>=0 and str[i]-'0'<=9)
            {
                if(sc==0)
                {
                    if(sl==0)
                        n1+=str[i];
                    else if(sl==1)
                        d1+=str[i];
                }
                else if(sc==1)
                {
                    if(sl==1)
                        n2+=str[i];
                    else if(sl==2)
                    {
                        d2+=str[i];
                    }
                }
            }
            else if(str[i]==' ') sc++;
            else if(str[i]=='/') sl++;
        }
        
        double nu1=0,de1=0,nu2=0,de2=0;
        double fv=1;
        for(int i=n1.size()-1;i>=0;i--)
        {
            nu1=nu1+(fv*(n1[i]-'0'));
            fv*=10;
        }
        fv=1;
        for(int i=d1.size()-1;i>=0;i--)
        {
            de1=de1+(fv*(d1[i]-'0'));
            fv*=10;
        }
        fv=1;
        for(int i=n2.size()-1;i>=0;i--)
        {
            nu2=nu2+(fv*(n2[i]-'0'));
            fv*=10;
        }
        fv=1;
        for(int i=d2.size()-1;i>=0;i--)
        {
            de2=de2+(fv*(d2[i]-'0'));
            fv*=10;
        }
        
        double frac1=((double)nu1/(double)de1);
        double frac2=((double)nu2/(double)de2);
        if(frac1==frac2) return "equal";
        else if(frac1>frac2)
        {
            return n1+"/"+d1;
        }
        else return n2+"/"+d2;
    }
