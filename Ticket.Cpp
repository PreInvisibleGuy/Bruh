#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],d[100001];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("Ticket.Inp   ","r",stdin);
  freopen("Ticket.Out","w",stdout);
    cin>>n;
   for(int i=1;i<=n;i++)
    cin>>a[i];
   d[1]=a[1];
   d[2]=min(a[1]+a[2],2*a[1]);
   for(int i=3;i<=n;i++)
   {
       d[i]=min(a[i]+d[i-1],2*a[i-1]+d[i-2]);
   }
   cout<<d[n];

}
