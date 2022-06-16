#include<bits/stdc++.h>
using namespace std;
int n,a[100001],ma[100001];
long long p[100001];
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("VNI.INP ","r",stdin);
freopen("VNI.OUT ","w ",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
    cin>>a[i];
   ma[n]=a[n];
   for(int i=n-1;i>=1;i--)
    ma[i]=max(a[i],ma[i+1]);
   p[n]=0;
   for(int i=n-1;i>=1;i--)
   {
       p[i]=(ma[i]-a[i])+p[i+1];
   }
   int q,t;
   cin>>q;
   while(q--)
   {
       cin>>t;
       cout<<p[t]<<'\n';
   }
}
