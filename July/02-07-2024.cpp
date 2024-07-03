bool sol(int i,int j,string& str)
    {
        if(i>=j) return true;
        if(str[i]!=str[j]) return false;
        return sol(i+1,j-1,str);
    }
    bool compute(Node* head) {
        string str="";
        Node *nd=head;
        while(nd)
        {
            str+=nd->data;
            nd=nd->next;
        }
        return sol(0,str.size()-1,str);
        
    }
