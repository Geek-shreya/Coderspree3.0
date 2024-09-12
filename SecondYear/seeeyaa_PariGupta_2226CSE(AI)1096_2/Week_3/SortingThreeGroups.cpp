class Solution {
public:
   
      int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(4, 1e9);
        dp[0] = 0;
        
        for (int j = 0; j < n; j ++) {
            vector<int> new_dp(4, 1e9);
            
            for (int i = 1; i <= 3; i ++)
                for (int prv = 0; prv <= i; prv ++)
                    new_dp[i] = min(new_dp[i], (nums[j] == i? 0 : 1) + dp[prv]);
            
            dp = new_dp;
        }
        
        return min (dp[1], min(dp[2], dp[3]));
    }
};  
        
    