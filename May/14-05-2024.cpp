int MinimumEffort(int n, int m, vector<vector<int>> &arr) {
        priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,
        greater<pair<pair<int,int>,int>>>pq;
        pq.push({{0,0},0});
        vector<int>delr={-1,0,1,0};
        vector<int>delc={0,1,0,-1};
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        dist[0][0]=arr[0][0];
        while(!pq.empty())
        {
            int i=pq.top().first.first;
            int j=pq.top().first.second;
            int dis=pq.top().second;
            if(i==n-1 and j==m-1) return dis;
            pq.pop();
            for(int k=0;k<4;k++)
            {
                int r=i+delr[k];
                int c=j+delc[k];
                if(r>=0 and r<n and c>=0 and c<m)
                {
                    int eff=max(abs(arr[i][j]-arr[r][c]),dis);
                    if(eff<dist[r][c])
                    {
                        dist[r][c]=eff;
                        pq.push({{r,c},eff});
                    }
                }
            }
            
        }
        return -1;
    }
