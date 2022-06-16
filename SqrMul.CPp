#include<bits/stdc++.h>
using namespace std;
const int base=1e9+7;
long long n,a[100001],dem[10000001],x,mv;
void pt(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        int e=0;
         while(x%i==0)
      {
        e++;
       x=x/i;
       }
     if(dem[i]<e)
        dem[i]=e;
       }
       if(x>1)
    {
        if(dem[x]<1)
            dem[x]=1;
    }
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("SqrMul.Inp", "r", stdin);
    freopen("SqrMul.Out", "w", stdout);
    cin>>n;
    long long ans=1;
    for(int i=1;i<=n;i++)
{
    cin>>x;
    mv=max(mv,x);pt(x);
}
for(int i=2;i<=mv;i++)
{
    dem[i]+=(dem[i]%2);
    for(int t=1;t<=dem[i];t++)
    {
        ans=ans*i;
        ans%=base;

    }
}
cout<<ans;

}
