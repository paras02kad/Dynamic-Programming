/*

* Here error is rectified using DP.
*/

class Solution
{
public:
    vector<int> dp;
    int f(vector<int> arr, int i)
    {
        if (i == arr.size() - 1)
            return arr[i]; //! When we are on last element of our array.
        if (i == arr.size() - 2)
            return max(arr[arr.size() - 1], arr[arr.size() - 2]); //! If our array has only 2 elements.
        if (i > arr.size())
            return 0; //! if our iterator goes beyond the scope of defined array.
        if (dp[i] != -1)
            return dp[i];
        return dp[i] = max(arr[i] + f(arr, i + 2), 0 + f(arr, i + 1));
        //* first case deals with robbing while second case deals with not robbing a particular house.
    }
    int rob(vector<int> &nums)
    {
        int i = 0;
        dp.clear();
        dp.resize(nums.size(), -1);
        return f(nums, i);
    }
};