bool canPair(vector<int> nums, int k) {
        
       if(nums.size()&1) return false;
       
       multiset<int> st;
       
       for(auto &ele : nums) st.insert(ele%k);
       
       while(!st.empty())
       {
           int val = *st.begin();
           st.erase(st.begin());
           int x = val == 0 ? 0 : k - val;
           auto it = st.find(x);
           
           if(it == st.end()) return false;
           
           st.erase(it);
       }
        
        return true;
    }