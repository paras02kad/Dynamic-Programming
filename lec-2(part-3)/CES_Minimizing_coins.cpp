#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;


int f(int x, vector<int> coins)
{
    //! Base cases;
    if (x == 0)
        return 0;
   
    int ans = INT_MAX;
    //! iterating via loop to check for all the coins.

    for (int i = 0; i < coins.size(); i++)
    {
        ans = min(ans, (x - coins[i] >= 0 ? f(x - coins[i], coins) : INT_MAX));
    }
    if (ans == INT_MAX)
        return -1;
    else
        return 1 + ans;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        coins.push_back(c);
    }
    cout << f(x, coins) << endl;
    return 0;
}