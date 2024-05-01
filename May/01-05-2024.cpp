struct Node* arrangeCV(Node *head)
    {
       struct Node* cur=head;
       struct Node* vo=new Node(-1);
       struct Node* co=new Node(-1);
       struct Node *vp=vo,*cp=co;
       while(cur)
       {
          if(cur->data=='a'||cur->data=='e'||cur->data=='i'||cur->data==('o')||cur->data==('u'))
          {
                    vp->next=cur;
                    vp=vp->next;
          }
          else{
              cp->next=cur;
              cp=cp->next;
          }
        // cout<<cur->data<<" ";
           cur=cur->next;
       }
      vp->next=co->next;
      cp->next = NULL;
      return vo->next;
       
    }
