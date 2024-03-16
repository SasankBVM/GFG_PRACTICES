void deleteNode(Node *del_node)
    {
       if(!del_node->next) return;
       int tmp=del_node->next->data;
       del_node->data=tmp;
       del_node->next=del_node->next->next;
    }