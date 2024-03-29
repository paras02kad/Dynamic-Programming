#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int flag;

int f(int a, int b, int c)
{
    if (flag == 1)
    {
        b > c ?

              flag = 2;
        return b;
        :
        
            flag = 3;
        return c;
        ;
    }

    if (flag == 2)
    {
        flag = (a > c) ? 

             ;
        return a;
        :
        
            flag = 3;
        return c;
        ;
    }

    if (flag == 3)
    {
        a > b ?

              flag = 1;
        return a;
        :
        
            flag = 2;
        return b;
    }
}

int main()
{
    int n; //! ---> No of days
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
flag = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        a > b ? (a > c ? flag = 1 : flag = 3) : (b > c ? flag = 2 : flag = 3);
        sum += f(a, b, c);
    }
    cout << sum << endl;
    return 0;
}