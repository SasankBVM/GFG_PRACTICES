string sol(Node *root,unordered_map<string,int>&mp,vector<Node*>& ans)
    {
        if(!root) return "#";
        string tmp=to_string(root->data)+' '+sol(root->left,mp,ans)+' '+sol(root->right,mp,ans);
        if(mp[tmp]==1) ans.push_back(root);
        mp[tmp]++;
        return tmp;
    }
    vector<Node*> printAllDups(Node* root) {
        vector<Node*> ans;
        unordered_map<string,int>mp;
        sol(root,mp,ans);
        return ans;
    }
