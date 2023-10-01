int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        long long int sum = nums[0];
        int cnt = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(sum > 0)
                cnt++;
        
            sum = sum + nums[i];
            
        }
        if(sum > 0)
            cnt++;
        return cnt;
        
        
    }
