#include<bits/stdc++.h>
using namespace std;
long long n,x,ans=1e9,s=0;
pair<int,int >a[200002];
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("RedBlackMin.Inp ","r",stdin);
   freopen("RedBlackMin.Out","w ",stdout);

     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i].first;
     }
     for(int i=1;i<=n;i++)
{
    cin>>a[i].second;
}
     for(int i=2;i<=n;i++)
     {

         if(a[i].second+a[i-1].second==2 and a[i].second!=1)
         {
             x=a[i].first-a[i-1].first;
             ans=min(ans,x);
         }
     }
     cout<<ans;



}


