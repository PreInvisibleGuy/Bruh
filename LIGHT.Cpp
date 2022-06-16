#include<bits/stdc++.h>
using namespace std;
long long n,m,a[101];
long long BCNN(long long a[],int n)
{
    if(n==1)
        return a[1];
    long long x=BCNN(a,n-1);
    return x*a[n]/(__gcd(x,a[n]));
}
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("LIGHT.INP     ","r",stdin);
freopen("LIGHT.Out  ","w ",stdout);
   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
       a[i]=a[i]+2;
    }
    long long e=BCNN(a,n);
    cout<<1+m/e;


}
