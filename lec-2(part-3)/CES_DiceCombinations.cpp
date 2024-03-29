#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;
#define mod 1000000007
vector<int> dice;
vector<int>dp;
/*
! This code won't go with DP because i have changed the function from int to void.
*/
// int data -- >Global variable
//  void f(int n)
//  {
//      if(dp[n]!=-1)return dp[n];
//      if (n == 0)
//      {
//          data+=1;
//          return;
//      }

//     for (int i = 1; i <= 6; i++)
//     {
//         if (n - i < 0)
//             continue;
//             f(n-i);
//     }
//     return;
// }

int f(int n)
{
    if (n == 0)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    int sum = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (n - i < 0)
            break;
        sum = (sum%mod + f(n - i)%mod)%mod;
    }
    return dp[n] = sum;
}

int main()
{
    int n;
    cin >> n;
    dp.clear();
    dp.resize(1000005, -1);
    for (int i = 1; i <= 6; i++)
        dice.push_back(i);

    cout << f(n) << endl;

    return 0;
}