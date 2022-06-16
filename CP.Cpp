#include <bits/stdc++.h>
using namespace std;
long long n,a[1001],s=0;
int ktra(int x)
{
    int k=sqrt(x);
    if(k*k==x)
        return 1;
    return 0;
}
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CP.Inp  ","r",stdin);
freopen("CP.Out","w ",stdout);
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  for(int i=1;i<=n;i++)
    if(ktra(a[i]))
       s=s+a[i];
  cout<<s;


}
