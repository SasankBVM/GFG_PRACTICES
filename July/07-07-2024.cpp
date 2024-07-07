struct Node *pre=NULL;
    void trav(struct Node *root,unordered_map<struct Node *,struct Node *>&mp,int k)
    {
        if(!root) return;
        if(root->data==k) pre=root;
        if(root->left)  mp[root->left]=root;
        trav(root->left,mp,k);
        if(root->right) mp[root->right]=root;
        trav(root->right,mp,k);
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ans;
        //sol(root,target,ans);
        unordered_map<struct Node *,struct Node *>mp;
        mp[root]=NULL;
        trav(root,mp,target);
        while(pre!=NULL)
        {
            pre=mp[pre];
            if(pre)
                ans.push_back(pre->data);
        }
        return ans;
    }
