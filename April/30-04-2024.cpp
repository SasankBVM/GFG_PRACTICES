struct Node* rev(struct Node *hd)
    {
        struct Node *cur=hd,*pre=NULL;
        while(cur)
        {
            struct Node *nxt=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nxt;
        }
        return pre;
    }
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        num1=rev(num1);
        num2=rev(num2);
        int carry=0;
        struct Node *nd=new Node(-1);
        struct Node *cur=nd;
        while(num1 and num2)
        {
            int sum=num1->data+num2->data+carry;
            struct Node *kh=new Node(sum%10);
            carry=sum/10;
            cur->next=kh;
            cur=kh;
            num1=num1->next;
            num2=num2->next;
        }
        while(num1)
        {
            int sum=num1->data+carry;
            struct Node *kh=new Node(sum%10);
            carry=sum/10;
            cur->next=kh;
            cur=kh;
            num1=num1->next;
        }
        while(num2)
        {
            int sum=num2->data+carry;
            struct Node *kh=new Node(sum%10);
            carry=sum/10;
            cur->next=kh;
            cur=kh;
            num2=num2->next;
        }
        if(carry)
        {
            struct Node *kh=new Node(carry);
            cur->next=kh;
            cur=kh;
        }
        struct Node *res=rev(nd->next);
        struct Node *og=res;
        while(og and og->data==0) og=og->next;
        if(og==NULL)
        {
            struct Node *nri=new Node(0);
            return nri;
        }
        return og;
        
    }
