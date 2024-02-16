class Solution
{
public:
    vector<Node *>vec;
    void inorder(Node *root)
    {
        if(!root) return;
        inorder(root->left);
        vec.push_back(root);
        inorder(root->right);
    }
    Node *brute(Node *root)
    {
        vec.clear();
        inorder(root);
        for(int i=0;i<vec.size()-1;i++)
        {
            vec[i]->left=NULL;
            vec[i]->right=vec[i+1];
        }
        return vec[0];
    }
    void sol(Node *root,Node *&rn)
    {
        if(root==NULL) return;
        sol(root->left,rn);
        rn->right=root;
        rn=root;
        rn->left=NULL;
        sol(root->right,rn);
        return;
    }
    Node *flattenBST(Node *root)
    {
        if(!root) return NULL;
        // return brute(root); //BRUTE FORCE TECHNIQUE 
        Node *nd=new Node(-1);
        Node *rn=nd;
        sol(root,rn); //OPTIMIZED TECHNIQUE
        return nd->right;
    }
};