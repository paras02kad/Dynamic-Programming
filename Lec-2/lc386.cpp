class Solution
{
public:
    void f(int i, int n, vector<int> &data)
    {
        if (i > n)
            return;
        else if (i <= n && i != 0)
            data.push_back(i);

        if (i != 0)
        {
            for (int j = 0; j <= 9; j++)
                f(10 * i + j, n, data);
        }
        else if (i == 0)
        {
            for (int j = 1; j <= 9; j++)
            {
                f(10 * i + j, n, data);
            }
        }
    }

    vector<int> lexicalOrder(int n)
    {
        vector<int> data;
        f(0, n, data);
        return data;
    }
};