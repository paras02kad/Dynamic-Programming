#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

vector<int> dp;

int f(int x, vector<int> &coins)
{
    //! Base cases;
    if (x == 0)
        return 0;

    if (dp[x] != -2)
        return dp[x];


    int ans = INT_MAX;
    //! iterating via loop to check for all the coins.

    for (int i = 0; i < coins.size(); i++)
    {
        if (x - coins[i] < 0)
            continue;
        ans = min(ans, f(x - coins[i], coins));
    }
    if (ans == INT_MAX)
        return dp[x] = INT_MAX; //! If our test case of -1 hits
    else
        return dp[x] = 1 + ans;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins;
    dp.clear();
    dp.resize(x+1, -2); //! Initialized with -2 instead of -1 to avoid conflict with test case which returns -1;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        coins.push_back(c);
    }
    if (f(x, coins) == INT_MAX)
        cout << -1 << endl;
    else
        cout << f(x, coins) << endl;
    return 0;
}