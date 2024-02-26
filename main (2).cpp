void sol(int idx,string s,string tmp,vector<string>&ans)
	    {
	        if(idx==s.size())
	        {
	            if(tmp.size()>0)
	                ans.push_back(tmp);
	            return;
	        }
	        tmp+=s[idx];
	        sol(idx+1,s,tmp,ans);
	        tmp.pop_back();
	        sol(idx+1,s,tmp,ans);
	    }
		vector<string> AllPossibleStrings(string s){
		       vector<string>ans;
		       sol(0,s,"",ans);
		       sort(ans.begin(),ans.end());
		       return ans;
		}