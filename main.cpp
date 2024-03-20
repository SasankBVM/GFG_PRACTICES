int cs(Node *ptr,unordered_map<Node*,Node*>&mp)
    {
        int sum=0;
        while(ptr!=NULL)
        {
            sum+=ptr->data;
            ptr=mp[ptr];
        }
        return sum;
    }
    int geth(Node *root)
    {
        int maxl=-1;
        Node *ptr=NULL;
        queue<pair<Node*,int>>q;
        unordered_map<Node*,Node*>mp;
        unordered_map<int,vector<Node*>>adr;
        mp[root]=NULL;
        q.push({root,0});
        while(!q.empty())
        {
            Node *nd=q.front().first;
            int lvl=q.front().second;
            adr[lvl].push_back(nd);
            q.pop();
            if(lvl==maxl)
            {
                if(ptr==NULL||ptr->data<=nd->data) ptr=nd;
            }
            else if(lvl>maxl)
            {
                ptr=nd;
                maxl=lvl;
            }
            if(nd->left)
            {
                q.push({nd->left,lvl+1});
                mp[nd->left]=nd;
            }
            if(nd->right)
            {
                q.push({nd->right,lvl+1});
                mp[nd->right]=nd;
            }
        }
        int msum=0;
        for(auto it:adr[maxl])
        {
            msum=max(msum,cs(it,mp));
        }
        return msum;
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        return geth(root);
    }