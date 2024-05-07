vector<int> reverseLevelOrder(Node *root)
{
    vector<int>ans;
   queue<Node *>q;
   q.push(root);
   while(!q.empty())
   {
       Node *curr=q.front();
       q.pop();
       ans.push_back(curr->data);
       if(curr->right!=NULL) q.push(curr->right);
       if(curr->left!=NULL) q.push(curr->left);
   }
   reverse(ans.begin(),ans.end());
   return ans;
}
