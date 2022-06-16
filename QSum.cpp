#include<bits/stdc++.h>
using namespace std;
int n,q,a[100001],s[100001],dem=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("QSUM.INP ","r",stdin);
freopen("QSUM.Out","w ",stdout);
   cin>>n>>q;
   for(int i=1;i<=n;i++)
    cin>>a[i];
   for(int i=1;i<=n;i++)
    s[i]=s[i-1]+a[i];
   while(q--)
   {
       int i,j;
       cin>>i>>j;
       cout<<s[j]-s[i-1]<<'\n';
   }
}
