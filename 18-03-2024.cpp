vector<int> levelOrder(Node* root)
    {
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node *nd=q.front();
            ans.push_back(nd->data);
            q.pop();
            if(nd->left) q.push(nd->left);
            if(nd->right) q.push(nd->right);
        }
        return ans;
    }
