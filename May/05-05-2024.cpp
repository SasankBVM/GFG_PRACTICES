vector <int> verticalSum(Node *root) {
       map<int,int>mp;
       queue<pair<Node*,int>>q;
       q.push({root,0});
       while(!q.empty())
       {
           Node *nd=q.front().first;
           int lvl=q.front().second;
           q.pop();
           mp[lvl]+=nd->data;
           if(nd->left) q.push({nd->left,lvl-1});
           if(nd->right) q.push({nd->right,lvl+1});
       }
       vector<int>ans;
      for(auto it:mp) ans.push_back(it.second);
      return ans;
    }
