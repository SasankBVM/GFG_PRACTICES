int minValue(Node* root) {
        Node *cur=root;
        while(cur->left) cur=cur->left;
        return cur->data;
    }
