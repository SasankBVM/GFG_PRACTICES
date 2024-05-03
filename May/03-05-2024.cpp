void sol(struct Node *root,int k,vector<int>&ans)
    {
        if(!root||k<0) return;
        if(k==0)
        {
            ans.push_back(root->data);
        }
        sol(root->left,k-1,ans);
        sol(root->right,k-1,ans);
    }
    vector<int> Kdistance(struct Node *root, int k)
    {
        vector<int>ans;
        sol(root,k,ans);
        return ans;
    }
