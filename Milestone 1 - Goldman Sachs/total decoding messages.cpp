int recur(string &s,int idx,vector<int> &dp)
    {
        if(idx < s.size() and s[idx] == '0') return 0;
        if(idx >= s.size()-1)
            return 1;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        int val = recur(s,idx+1,dp);
         // cout<<idx<<" "<<val<<"\n";
        if(idx < s.size()-1)
        {
            string str = "";
            str += s[idx];
            str += s[idx+1];
            // cout<<str<<" ";
            if(stoi(str) <= 26)  val += recur(s,idx+2,dp);
            // cout<<idx<<" "<<val<<"\n";
        }
        
        return dp[idx] = val;
    }

    int numDecodings(string s) {
        vector<int> dp(s.size()+1,-1);
        return recur(s,0,dp);
    }