vector<int> bracketNumbers(string str) {
        vector<int>vec;
        priority_queue<int>pq;
        int bn=0;
        int maxb=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='(')
            {
                bn++;
                pq.push(bn);
                vec.push_back(bn);
            }
            else if(str[i]==')')
            {
                int num=pq.top();
                pq.pop();
                vec.push_back(num);
            }
        }
        return vec;
    }
