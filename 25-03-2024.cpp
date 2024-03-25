void sol(int zc,int oc,string str,vector<string>&ans,int n)
    {
        if(zc>oc) return;
        if(str.size()>=n)
        {
            if(oc>=zc)
            {
                ans.push_back(str);
            }
            return;
        }
        sol(zc,oc+1,str+'1',ans,n);
        sol(zc+1,oc,str+'0',ans,n);
        return;
    }
	vector<string> NBitBinary(int n)
	{
	    vector<string>ans;
	    sol(0,0,"",ans,n);
	    return ans;
	}
