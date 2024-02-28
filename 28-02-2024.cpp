int DivisibleByEight(string s){
       if(s.size()<3)
       {
           return (stoi(s)%8==0)?1:-1;
       }
       else{
           int th=3;
           int fv=1;
           int num=0;
           int idx=s.size()-1;
           while(th--)
           {
               int rem=s[idx--]-'0';
               num+=(fv*rem);
               fv=fv*10;
           }
           return (num%8==0)?1:-1;
       }
    }
