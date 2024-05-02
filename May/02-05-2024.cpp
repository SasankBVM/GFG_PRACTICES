void sol(Node *root,vector<int>&ans)
    {
        if(!root) return;
        sol(root->left,ans);
        ans.push_back(root->data);
        sol(root->right,ans);
    }
    vector<int> serialize(Node *root) 
    {
        vector<int>ans;
        sol(root,ans);
        return ans;
    }
    Node *ds(int l,int h,vector<int>&arr)
    {
        if(l>h) return NULL;
        int mid=(l+h)>>1;
        Node *nn=new Node(arr[mid]);
        nn->left=ds(l,mid-1,arr);
        nn->right=ds(mid+1,h,arr);
        return nn;
    }
    Node * deSerialize(vector<int> &arr)
    {
       return ds(0,arr.size()-1,arr);
    }
