//! Q.Given an number n,count the number of binary strings of length n without consecutive ones.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void machine(vcetor<string>&ans,string data,int n)
{
    if(data[data.lenght()-1]==)
    if(data.length()==n)
    {
        ans.push_back(data);
        return;
    }
    machine(ans,data+'0',n);
    machine(ans,data+'1',n);


}

int main()
{

    int n;
    cin >> n;
    string ans = "";
    vector<string> data;
    machine(ans, n, data);
    printer(data);
    return 0;
}