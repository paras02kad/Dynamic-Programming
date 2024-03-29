#include <iostream>
#include <vector>

using namespace std;

vector<bool> dp; //! --> Declared a bool vector.

int main()
{
    int k, l, m;
    //! m --> no of games
    cin >> k >> l >> m;

    dp.clear();
    dp.resize(1000005, 0); //! --> This size shows maximum number of coins we might need to tackle.

    //! Filling some cases
    dp[1] = 1;
    dp[k] = 1;
    dp[l] = 1;

    //! now filling of vector dp
    for (int i = 2; i < dp.size(); i++)
    {
        if (i == l || i == k)
            continue;
        //! Fills the array accordingly
        dp[i] = !(dp[i - 1] && (i - k > 0 ? dp[i - k] : 1) && (i - l > 0 ? dp[i - l] : 1));
    }

    //! Generating output with different values of n according to the values filled according to the values of k and l.
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        if (dp[n])
            cout << 'A'; //! ---> Winning state
        else
            cout << 'B'; //! ---> Losing state
    }

    return 0;
}