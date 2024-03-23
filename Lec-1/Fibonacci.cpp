#include <iostream>
using namespace std;

//! Asymptotic analysis
//! TC = O(2^n);
//! SC = O(n);

int f(int n)
{
    if(n==0 || n==1)return n;
    return f(n-1)+f(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
return 0;
}