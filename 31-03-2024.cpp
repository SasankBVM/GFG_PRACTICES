int findMaxForN(Node* root, int x) {
        Node *cur=root,*pre=NULL;
        while(cur)
        {
            if(cur->key<=x)
            {
                pre=cur;
                cur=cur->right;
            }
            else cur=cur->left;
        }
        return (!pre)?-1:pre->key;
    }
