#include<bits/stdc++.h>
using namespace std;
int n,a[1001];
int main()
{

ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("WHEEL.INP  ","r",stdin);
  freopen("WHEEL.OUT ","w ",stdout);
    cin>>n;
    cin>>a[1];
    for(int i=2;i<=n;i++)
    {
        cin>>a[i];
        int m=__gcd(a[1],a[i]);
        cout<<a[1]/m<<'/'<<a[i]/m<<'\n';
    }

}
