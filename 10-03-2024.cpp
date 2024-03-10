string removeDuplicates(string str) {
	    string ans="";
	    unordered_map<char,int>mp;
	    for(int i=0;i<str.size();i++)
	    {
	        if(mp.find(str[i])==mp.end())
	        {
	            mp[str[i]]++;
	            ans+=str[i];
	        }
	    }
	    return ans;
	}
