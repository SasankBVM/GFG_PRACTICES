Node* deleteK(Node *head,int k){
        Node *cur=head,*pre=NULL;
        if(k==1||!head) return NULL;
        int ck=1;
        while(cur)
        {
            if(ck%k==0)
            {
                pre->next=cur->next;
                cur->next=NULL;
                cur=pre->next;
            }
            else
            {
                pre=cur;
                cur=cur->next;
            }
            ck++;
        }
        return head;
      
    }
