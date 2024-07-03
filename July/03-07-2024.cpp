Node* removeAllDuplicates(struct Node* head) {
        if(!head||!head->next) return head;
        unordered_map<int,int>mp;
        Node *cur=head;
        while(cur)
        {
            mp[cur->data]++;
            cur=cur->next;
        }
        cur=head;
        Node *dum=new Node(-1);
        Node *dp=dum;
        while(cur)
        {
            if(mp[cur->data]>1)
            {
                dp->next=cur->next;
            }
            else{
                dp->next=cur;
                dp=cur;
            }
            cur=cur->next;
        }
        return dum->next;
    }
