#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int f(n,a)
{
    int sum = a + max(f(n-1,))
}

int main()
{
    int n;
    cin >> n; //! ---> No of days
    vector<vector<int>>dp(n, vector<int>(3, 0));
    int a, b, c;
    cin >> a >> b >> c;

    //* Base case
    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;

    for (int i = 1; i < n; i++)
    {
        cin >> a >> b >> c; //! --> Taking value of happiness at different days

        dp[i][0] = a + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = b + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = c + max(dp[i - 1][0], dp[i - 1][1]);
    }
    cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2])) << endl;

    return 0;
}