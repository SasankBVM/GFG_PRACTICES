void convert(Node *head, TreeNode *&root) {
        Node *nd=head;
        unordered_map<int,TreeNode*>mp;
        queue<pair<int,TreeNode*>>q;
        int lvl=0;
        while(nd)
        {
            TreeNode *nn=new TreeNode(nd->data);
            mp[lvl]=nn;
            q.push({lvl,nn});
            nd=nd->next;
            lvl++;
        }
        while(!q.empty())
        {
            int ld=q.front().first;
            TreeNode *nn=q.front().second;
            q.pop();
            if(ld==0)
            {
                root=nn;
            }
            if(2*ld+1<lvl) nn->left=mp[2*ld+1];
            if(2*ld+2<lvl) nn->right=mp[2*ld+2];
        }
    }
