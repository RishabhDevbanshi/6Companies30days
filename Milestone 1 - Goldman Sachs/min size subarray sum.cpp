int minSubArrayLen(int target, vector<int>& nums) {
        
        int res = size(nums)+1,winSum = 0,winLen=0;
        int start = 0 , end = 0;
        
        while(start<size(nums) and end<size(nums))
        {
            winSum += nums[end++];
            winLen++;
            
            if(winSum < target) continue;
            
            while(start <= end and winSum - nums[start] >= target)
            {
                winSum -= nums[start++];
                winLen--;
            }
            
            // cout<<winSum<<" ";
            
            res = min(res,winLen);
            // end++;
            
        }
        // cout<<res<<"\n";
        // cout<<winSum<<" ";
        
        while(start <= end and winSum - nums[start] >= target)
        {
            // cout<<"here";
            winSum -= nums[start++];
            winLen--;
            res = min(res,winLen);
        }
        
        
        return res == size(nums)+1 ? 0 : res;
    }