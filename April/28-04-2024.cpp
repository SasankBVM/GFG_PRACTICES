Node* deleteMid(Node* head)
    {
        int n=0;
        if(!head||!head->next) return NULL;
        Node *cur=head;
        while(cur)
        {
            n++;
            cur=cur->next;
        }
        if(n%2==1)
        {
            Node *sl=head,*ft=head->next,*pre=NULL;
            while(ft and ft->next)
            {
                pre=sl;
                sl=sl->next;
                ft=ft->next->next;
            }
            pre->next=sl->next;
            sl->next=NULL;
            return head;
        }
        else{
            Node *sl=head,*ft=head,*pre=NULL;
            while(ft and ft->next)
            {
                pre=sl;
                sl=sl->next;
                ft=ft->next->next;
            }
            pre->next=sl->next;
            sl->next=NULL;
            return head;
        }
        
    }
