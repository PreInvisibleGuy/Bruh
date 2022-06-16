#include<bits/stdc++.h>
using namespace std;
long long n,a[101];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("XSA.INP ","r",stdin);
   freopen("XSA.OUT","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
          cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=0)
           cout<<a[i]<<' ';

    }
}
