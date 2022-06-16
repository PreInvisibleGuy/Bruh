#include<bits/stdc++.h>
using namespace std;
long long n,m,x,y;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TROCHOI.INP", "r", stdin);
    freopen("TROCHOI.OUT", "w", stdout);
    cin>>m>>n>>x>>y;
    long long t=x*y/__gcd(x,y);
    long long s=(n/t-(m-1)/t);
    cout<<s;

}
