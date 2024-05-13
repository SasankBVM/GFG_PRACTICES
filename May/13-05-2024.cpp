bool bfs(vector<int>adj[],int nd,vector<int>&vis)
    {
        int v=0,e=0;
        queue<int>q;
        q.push(nd);
        vis[nd]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            v++;
            e+=adj[node].size();
            for(auto it:adj[node]) 
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        int comp=(v*(v-1));
        return (comp==e);
    }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) 
    {
        int ans=0;
        vector<int>vis(v+1,0);
        vector<int>adj[v+1];
        for(int i=0;i<e;i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=1;i<=v;i++)
        {
            if(bfs(adj,i,vis)) ans++;
        }
        return ans;
    }
