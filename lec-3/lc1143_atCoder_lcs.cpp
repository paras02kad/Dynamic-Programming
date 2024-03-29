#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ans="";
vector<vector<int>> dp;

int f(string &text1, string &text2, int i, int j, string data)
{
    if (data.length() > ans.length())
        ans = data;
    if (i >= text1.length())
        return 0;
    if (j >= text2.length())
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (text1[i] == text2[j])
        return dp[i][j] = 1 + f(text1, text2, i + 1, j + 1,data + text1[i]);
    return dp[i][j] = max(f(text1, text2, i + 1, j,data), f(text1, text2, i, j + 1,data));
}

int main()
{
    dp.clear();
    dp.resize(1005, vector<int>(1005, -1));
    string s1;
    string s2;
    cin >> s1 >> s2;
    f(s1, s1, 0, 0, "");
    cout << ans << endl;
    return 0;
}
