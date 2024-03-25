#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;
vector<int> dp;

int f(int n)
{
    //! Base Cases
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n == 3)
        return 1;
    //! Case t check for dp array to get already calculated value.
    if (dp[n] != -1)
        return dp[n];

    //! Most important recursive statement
    return dp[n] = (1 + min(f(n - 1), min((n % 2 == 0 ? f(n / 2) : INT_MAX), (n % 3 == 0 ? f(n / 3) : INT_MAX))));
}

int main()
{
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n + 1, -1);
    cout << f(n) << endl;

    return 0;
}