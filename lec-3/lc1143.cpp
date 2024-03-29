class Solution
{
public:
    int f(string &text1, string &text2, int i, int j)
    {
        if (i >= text1.length())
            return 0;
        if (j >= text2.length())
            return 0;
        if (text1[i] == text2[j])
            return 1 + f(text1, text2, i + 1, j + 1);
        return max(f(text1, text2, i + 1, j), f(text1, text2, i, j + 1));
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        return f(text1, text2, 0, 0);
    }
};