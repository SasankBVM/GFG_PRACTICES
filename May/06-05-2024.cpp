void sol(Node *root,vector<int>&ans)
{
    if(!root) return;
    Node *lft=root->left;
    Node *rgt=root->right;
    if((!lft and rgt)) ans.push_back(root->right->data);
    if((lft and !rgt)) ans.push_back(root->left->data);
    sol(root->left,ans);
    sol(root->right,ans);
}
vector<int> noSibling(Node* root)
{
    vector<int>ans;
    sol(root,ans);
    sort(ans.begin(),ans.end());
    if(ans.empty()) return vector<int>{-1};
    return ans;
}
