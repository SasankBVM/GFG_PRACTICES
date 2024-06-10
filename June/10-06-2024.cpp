class Solution {
  public:
    static bool comp(pair<char,int>&a,pair<char,int>&b)
    {
        return a.second<b.second;
    }
    void matchPairs(int n, char nuts[], char bolts[]) {
        unordered_map<char,int>mp;
        mp['!']=1;
        mp['#']=2;
        mp['$']=3;
        mp['%']=4;
        mp['&']=5;
        mp['*']=6;
        mp['?']=7;
        mp['@']=8;
        mp['^']=9;
        vector<pair<char,int>>nu;
        vector<pair<char,int>>b;
        for(int i=0;i<n;i++)
        {
            nu.push_back({nuts[i],mp[nuts[i]]});
            b.push_back({bolts[i],mp[bolts[i]]});
        }
        sort(nu.begin(),nu.end(),comp);
        sort(b.begin(),b.end(),comp);
        for(int i=0;i<n;i++)
        {
            nuts[i]=nu[i].first;
            bolts[i]=b[i].first;
        }
    }
};
