vector<vector<string> > Anagrams(vector<string>& str) {
        map<string,vector<string>> mp;
        
        for(auto &ele : str)
        {
            string temp = ele;
            sort(ele.begin(),ele.end());
            mp[ele].push_back(temp);
        }
        
        vector<vector<string>> res;
        
        for(auto it : mp)
        {
            res.push_back(it.second);
        }
        
        return res;
        
    }