#include <iostream>
#include <vector>
using namespace std;

//! Asymptotic Analysis
//! TC  = O(n);
//! SC = O(n);

int f(int n)
{
    vector<int> dp;
    dp.clear();
    dp.resize(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= dp.size(); i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    return dp[n];
}

//! More optimized bottom to top
//! Asymptotic Analysis
//! TC = O(n);
//!SC = O(1)
int f(int n)
{
    if(n==0 || n==1 )return n;
    int a = 0;
    int b = 1;
    int i = 2;
    int c;

    while(i<=n)
    {
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return c;
}







int main()
{
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
