#include<bits/stdc++.h>
using namespace std;
long long n,a[1001],x,s=0;
int main()
{

    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("CoPair.Inp","r",stdin);
    freopen("CoPair.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
    {
         x=__gcd(a[i],a[j]);
         if(x==1 and a[i]>0 and a[j]>0)
         {
             s++;
         }
    }
    cout<<s;
}
