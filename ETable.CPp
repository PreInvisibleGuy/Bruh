#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ETable.Inp ", "r", stdin);
    freopen("ETable.Out", "w", stdout);
    long long n,m,s;
    cin>>n>>m;
   s=(n+1)*(m+1)/(__gcd(n+1,m+1));
   cout<<s;
}
