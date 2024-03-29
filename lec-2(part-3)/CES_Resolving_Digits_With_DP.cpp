#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

vector<int> dp;

vector<int> get_digits(int n)
{
    vector<int> ans;
    while (n > 0)
    {
        int a = n % 10;
        if (a != 0)
            ans.push_back(a);
        n /= 10;
    }
    return ans;
}

int f(int n)
{
    if (n == 0)
        return 0;
    if (n <= 9)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    vector<int> d = get_digits(n);
    //! Loop to iterate through all the digits present in integer n;
    int result = INT_MAX;
    for (auto it = d.begin(); it != d.end(); it++)
    {
        result = min(result, (f(n - *it)));
    }
    return dp[n] = (1 + result);
}

int main()
{
    dp.clear();
    dp.resize(1000005, -1); //! Declaring array according to the constraint given.
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}