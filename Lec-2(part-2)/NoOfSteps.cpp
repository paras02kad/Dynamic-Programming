#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

/*
!It is just recursion and may cause time limit exceeded error
! We can make it more optimized using DP that is making a dp vector to store pre calculated values
*/


int f(int n)
{
    //! Base Cases
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n == 3)
        return 1;

    //! Most important recursive statement
    return (1 + min(f(n - 1), min((n % 2 == 0 ? f(n / 2) : INT_MAX), (n % 3 == 0 ? f(n / 3) : INT_MAX))));
}

int main()
{
    int n;
    cin >> n;
    cout << f(n) << endl;

    return 0;
}