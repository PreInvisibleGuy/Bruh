#include<bits/stdc++.h>
using namespace std;
string s,x;
int main()
{
    cin>>s;
    cin>>x;
    int n=s.find(x),dem=0;
    while(n>0)
    {
       dem++;
    s.erase(s.begin()+n,s.begin()+n+x.size());
    n=s.find(x);
    }
    cout<<dem;
}
