/*
! The following problem will give error like memory limit exceeded because of too many recursive calls thus we will encounter stack overflow.
* This error can be rectified using dynamic programming.
*/

class Solution
{
public:
    int f(vector<int> arr, int i)
    {
        if (i == arr.size() - 1)
            return arr[i]; //! When we are on last element of our array.
        if (i == arr.size() - 2)
            return max(arr[arr.size() - 1], arr[arr.size() - 2]); //! If our array has only 2 elements.
        if (i > arr.size())
            return 0; //! if our iterator goes beyond the scope of defined array.
        returnmax(arr[i] + f(arr, i + 2), 0 + f(arr, i + 1));
        //* first case deals with robbing while second case deals with not robbing a particular house.
    }
    int rob(vector<int> &nums)
    {
        int i = 0;
        return f(nums, i);
    }
};