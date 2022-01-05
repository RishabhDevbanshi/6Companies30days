int nthUglyNumber(int n) {
        vector<int> dp(n);
        
        int two = 0 , three = 0, five = 0;
        
        dp[0] = 1;
        
        for(int i=1;i<n;i++)
        {
            dp[i] = min({2 * dp[two] , 3 * dp[three], 5 * dp[five]});
            two += (dp[i] == 2 * dp[two]);
            three += (dp[i] == 3 * dp[three]);
            five += (dp[i] == 5 * dp[five]);
        }
        
        for(auto &val : dp) cout<<val<<" ";
        
        return dp.back();
        
    }