vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>ans;
    	queue<Node*>q;
    	bool pass=true;
    	q.push(root);
    	while(!q.empty())
    	{
    	    int sz=q.size();
    	    vector<int>tmp(sz);
    	    for(int i=0;i<sz;i++)
    	    {
    	        Node *nd=q.front();
    	        q.pop();
    	        int idx=(pass)?i:sz-i-1;
    	        tmp[idx]=nd->data;
    	        if(nd->left) q.push(nd->left);
    	        if(nd->right) q.push(nd->right);
    	    }
    	    for(auto it:tmp) ans.push_back(it);
    	    pass=!pass;
    	}
    	return ans;
    }
