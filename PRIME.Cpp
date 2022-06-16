#include<bits/stdc++.h>
using namespace std;
long long a,b,s=0;
int main()
{
         ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("Prime.inp","r",stdin);
    freopen("Prime.out","w ",stdout);
    cin>>a>>b;
    long long n=floor(sqrt(b));
    long long m=floor(sqrt(a-1));
    cout<<n-m;
}

