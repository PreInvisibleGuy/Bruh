#include<bits/stdc++.h>
using namespace std;
long long n,x,ans=0,s=0,m;
pair<int,int >a[200002];
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("RedBlackMax.Inp ","r",stdin);
   freopen("RedBlackMax.Out","w ",stdout);

     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i].first;
     }
     for(int i=1;i<=n;i++)
{
    cin>>a[i].second;
}
      for(int i=1;i<=n;i++)
     {
         if(a[i].second==0)
         {
             x=a[i].first;
             break;
         }
     }
     for(int i=n;i>=1;i--)
     {

         if(a[i].second==2)
         {
             s=a[i].first;
             break;
         }
     }
     ans=abs(s-x);
for(int i=1;i<=n;i++)
     {
         if(a[i].second==2)
         {
             x=a[i].first;
             break;
         }
     }
     for(int i=n;i>=1;i--)
     {

         if(a[i].second==0)
         {
             s=a[i].first;
             break;
         }
     }
  m=abs(s-x);
  cout<<max(ans,m);


}


