#include <iostream>
#include <vector>

using namespace std;

vector<int> dp;

bool f(int k, int l, int n)
{
    if (n == k || n == l || n == 1)
        return true; //! ---> Our base case
    if (dp[n] != -1)
        return dp[n];

    return dp[n] = !(f(k, l, n - k) && f(k, l, n - l) && f(k, l, n - 1));
}

int main()
{
    dp.clear();
    dp.resize(1000006, -1);
    int m, l, k;
    cin >> k >> l >> m;

    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        if (f(k, l, n))
            cout << 'A';
        else
            cout << 'B';
    }
    return 0;
}
