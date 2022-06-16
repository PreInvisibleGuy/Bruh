#include<bits/stdc++.h>
using namespace std;
long long tong(long long x)
{
    long long tong=x*(x+1)/2;
    return tong;
}
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CalSum.Inp    ","r",stdin);
freopen("CalSum.Out ","w ",stdout);
    long long n;
    cin>>n;
    cout<<tong(n);
}
