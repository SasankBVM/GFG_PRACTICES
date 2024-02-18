class Solution
{
    public:
    void sol(Node *root,int& sum)
    {
        if(!root) return;
        if(!root->left and !root->right)
        {
            sum+=root->data;
            return;
        }
        sol(root->left,sum);
        sol(root->right,sum);
    }
    int sumOfLeafNodes(Node *root ){
        int sum=0;
        sol(root,sum);
        return sum;
    }
};