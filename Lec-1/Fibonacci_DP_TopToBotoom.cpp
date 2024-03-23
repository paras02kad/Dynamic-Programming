#include <iostream>

using namespace std;


vector<int> dp;//! Our vector to store already calculated results.

int f(int n)
{
    if (n == 0 || n == 1)return n;//! Base Case
        if (dp[n] != -1)
            return dp[n];//! dp check,To identify if the problem was already stored.
        else
            return dp[n]=(f(n - 1) + f(n - 2));//! Storing the calculated value in our array.
}
int main()
{
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n + 1, -1);
    cout << f(5) << endl;
    return 0;
}