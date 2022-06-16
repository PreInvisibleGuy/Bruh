#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("Fib.Inp   ","r",stdin);
      freopen("Fib.Out ","w ",stdout);
    long long n,a[101];
    cin>>n;
    a[1]=a[2]=1;
    for(int i=3;i<=101;i++)
        a[i]=a[i-1]+a[i-2];
    cout<<a[n];
}
