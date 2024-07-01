void sol(int idx,vector<int>&arr,TreeNode* &rt)
    {
        rt=new TreeNode(arr[idx]);
        int lft=2*idx+1,rgt=2*idx+2;
        if(lft<arr.size())
        {
            
            sol(lft,arr,rt->left);
        }
        else return;
        if(rgt<arr.size())
        {
            sol(rgt,arr,rt->right);
        }
        else return;
    }
    void convert(Node *head, TreeNode *&root) {
        vector<int>tmp;
        Node *nd=head;
        while(nd)
        {
            tmp.push_back(nd->data);
            nd=nd->next;
        }
        sol(0,tmp,root);
    }
