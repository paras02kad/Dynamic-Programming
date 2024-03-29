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

int f(int num)
{
    //! Base cases
    dp[0] = 0;
    for (int i = 1; i <= 9; i++)
        dp[i] = 1;

    for (int n = 10; n <= num; n++)
    {
        vector<int> d = get_digits(n);
        dp[n] = INT_MAX;
        for (int i = 0; i < d.size(); i++)
            dp[n] = min(dp[n], dp[n - d[i]]);
            dp[n] = 1 + dp[n];
    }

    return dp[num];
}

int main()
{
    dp.clear();
    dp.resize(1000005, -1); //! Declaring array according to the constraint given.
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}