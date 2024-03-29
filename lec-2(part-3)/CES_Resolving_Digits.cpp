#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

//! hint -> Very similar to coin change problem.

//* function that gives all the digits of a number n given as input.
vector<int> get_digits(int n)
{
    vector<int> ans;
    while (n > 0)
    {
        int a = n % 10;
        if (a != 0)
            ans.push_back(a);
        n /= 10;
    }
    return ans;
}

int f(int n)
{
    if (n == 0)
        return 0;
    if (n <= 9)
        return 1;

    vector<int> d = get_digits(n);
    //! Loop to iterate through all the digits present in integer n;
    int result = INT_MAX;
    for (int i = 0; i < d.size(); i++)
    {
        result = min(result, (f(n - d[i])));
    }
    return (1+result);
}


int main()
{
    cout << f(27) << endl;
    return 0;
}