string printMinNumberForPattern(string S){
        
        stack<int> st;
        string ans = "";
        int num = 1;
        for(auto &ch : S)
        {
            st.push(num++);
            if(ch == 'I')
            {
                while(!st.empty())
                {
                    ans += ('0' + st.top());
                    st.pop();
                }
            }
        }
        
        st.push(num);
        
        while(!st.empty())
        {
            ans += ('0' + st.top());
            st.pop();
        }
        
        return ans;
    }