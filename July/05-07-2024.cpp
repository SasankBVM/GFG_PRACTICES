void sol(Node *root,int lvl,map<int,int>&mp)
    {
        if(!root) return;
        mp[lvl]++;
        sol(root->left,lvl-1,mp);
        sol(root->right,lvl+1,mp);
    }
    int verticalWidth(Node* root) {
        map<int,int>mp;
        sol(root,0,mp);
        return mp.size();
    }
