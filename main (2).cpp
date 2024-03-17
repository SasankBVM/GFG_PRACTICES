int countPairs(struct Node* head1, struct Node* head2, int x) {
       unordered_set<int>st;
       int ans=0;
       while(head1)
       {
           st.insert(head1->data);
           head1=head1->next;
       }
       while(head2)
       {
           if(st.find(x-head2->data)!=st.end()) ans++;
           head2=head2->next;
       }
       return ans;
    }