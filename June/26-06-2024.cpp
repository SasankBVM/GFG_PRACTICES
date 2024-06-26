void cks(int i,int j,vector<vector<int>>& arr,int& ck)
    {
        if(i-1>=0 and arr[i-1][j]==1) ck++;
        if(j-1>=0 and arr[i][j-1]==1) ck++;
        if(i+1<=arr.size()-1 and arr[i+1][j]==1) ck++;
        if(j+1<=arr[i].size()-1 and arr[i][j+1]==1) ck++;
    }
    int findCoverage(vector<vector<int>>& matrix) {
        int ck=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0) cks(i,j,matrix,ck);
            }
        }
        return ck;
    }
