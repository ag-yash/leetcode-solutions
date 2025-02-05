// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dp[nums.size()];
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
        int ans = dp[0];
        for (int i = 1; i < nums.size(); i++)
            ans = max(ans, dp[i]);
        return ans;
    }
};