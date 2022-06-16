#include<bits/stdc++.h>
using namespace std;
long long x,y,s;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 freopen("CatHinh.Inp  ","r",stdin);
freopen("CatHinh.Out ","w ",stdout);
    cin>>x>>y;
    long long n=__gcd(x,y);
    s=x/n*y/n;
    cout<<s;
}
