Node *sol(int ins,int ine,int ps,int pe,int in[],int po[],int n,unordered_map<int,int>&mp)
    {
        if(ins>ine||ps>pe) return NULL;
        int idx=mp[po[pe]];
        int dif=idx-ins;
        Node *root=new Node(po[pe]);
        root->left=sol(ins,idx-1,ps,ps+dif-1,in,po,n,mp);
        root->right=sol(idx+1,ine,ps+dif,pe-1,in,po,n,mp);
        return root;
    }
    Node *buildTree(int in[], int post[], int n) {
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[in[i]]=i;
        }
        return sol(0,n-1,0,n-1,in,post,n,mp);
    }
