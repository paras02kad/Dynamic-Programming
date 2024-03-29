#include <iostream>
#include<vector>

using namespace std;
int main()
{
int n;
cin>>n;
while(n>0)
{
    int a = n%10;
    cout<<a<<endl;
    n/=10;
}
return 0;
}