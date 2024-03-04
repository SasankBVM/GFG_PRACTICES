static bool comp(string& a,string& b)
	{
	    string x=a+b;
	    string y=b+a;
	    return x>y;
	}
	string printLargest(int n, vector<string> &arr) {
	    string str="";
	    sort(arr.begin(),arr.end(),comp);
	    for(auto it:arr) str+=it;
	    return str;
	    
	}
