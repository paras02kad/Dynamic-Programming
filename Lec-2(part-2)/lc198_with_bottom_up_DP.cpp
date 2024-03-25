class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        //! We have calculated corner cases.
        if (n == 1)
            return nums[n - 1];
        if (n == 2)
            return max(nums[n - 1], nums[n - 2]);

        //! Initialized Dp with some basic values to work on.These pre filled values are our return cases values of our recursive approach.

        vector<int> dp;
        dp.clear();
        dp.resize(105, -1);
        dp[n - 1] = nums[n - 1];
        dp[n - 2] = max(nums[n - 1], nums[n - 2]);

        for (int i = n - 3; i >= 0; i++)
        {
            dp[i] = max(nums[i] + dp[i + 2], dp[i + 1]);
        }
        return dp[0];
    }
};