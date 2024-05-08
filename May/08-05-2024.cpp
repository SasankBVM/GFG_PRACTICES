void sol(Node *root,vector<int>tmp,vector<vector<int>>&ans)
    {
        if(!root) return;
        tmp.push_back(root->data);
        if(!root->left and !root->right)
        {
            ans.push_back(tmp);
            tmp.pop_back();
            return;
        }
        sol(root->left,tmp,ans);
        sol(root->right,tmp,ans);
    }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>>ans;
        vector<int>tmp;
        sol(root,tmp,ans);
        return ans;
    }
