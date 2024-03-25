#include <iostream>
#include <vector>
#include <climits>
#include <climits>

using namespace std;

int main()
{
    int n;
    vector<int> dp;
    cin >> n;

    dp.clear();
    dp.resize(n + 1, -1);

    //! Now filling some initial values to get base case values.

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = 1 + min(dp[i - 1], min((i % 2 == 0 ? dp[i / 2] : INT_MAX), (i % 3 == 0 ? dp[i / 3] : INT_MAX)));
    }
    cout << dp[n] << endl;

    return 0;
}