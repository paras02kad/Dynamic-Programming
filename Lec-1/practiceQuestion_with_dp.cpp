#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

vector<int> h; //*--> This vector stores and represents our heights.
vector<int>dp; //* --> To store already calculated values
int k;

int f(int i)
{
    if (i >= h.size())
        return INT_MAX; //! Our base case for last stone.
    if (i == h.size() - 1)
        return 0; //! We have reached our last stone.

if(dp[i]!=-1)return dp[i];//* That is if something else is stored in place of -1 then return the stored value.
    int ans = INT_MAX;

    for (int j = 1; i <= k; i++)
    {
        if (i + j >= h.size())
            break;
        ans = min(ans, abs(h[i] - h[i + j]) + f(i + j));
    }
    return dp[i]=ans;
}

int main()
{
    int n;
    cin >> n >> k;

    h.clear();
    h.resize(n);
    dp.clear();
    dp.resize(n,-1);


    for (int i = 0; i < h.size(); i++)
        cin >> h[i];

    cout << f(0) << endl;

    return 0;
}