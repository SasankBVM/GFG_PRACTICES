void sol(Node *root,map<int,int>&mp,int lvl)
    {
        if(!root) return;
        if(mp.find(lvl)==mp.end())
        {
            mp[lvl]=root->data;
        }
        else if(mp.find(lvl)!=mp.end()) mp[lvl]+=root->data;
        sol(root->left,mp,lvl+1);
        sol(root->right,mp,lvl);
    }
    vector <int> diagonalSum(Node* root) {
        map<int,int>mp;
        sol(root,mp,0);
        vector<int>ans;
        for(auto it:mp) ans.push_back(it.second);
        return ans;
    }
