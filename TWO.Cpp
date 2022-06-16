#include<bits/stdc++.h>
using namespace std;
int n,m;
pair<int ,int>d[200002];
int main()
{
    //freopen("TWO.Inp","r",stdin);
   //freopen("TWO.Out","w ",stdout);
       cin>>n;
    for(int i=1;i<=n;i++)
    {

        cin>>d[i].first;
        d[i].second=i;
    }
    sort(d+1,d+1+m+n);
   long long ans=-1,e;
   for(int i=2;i<=n;i++)
   {
       if(d[i].first==d[i-1].first)
       {
        e=d[i].second-d[i-1].second;
        if(ans==-1)
        {
            ans=e*e;
        }
        else
           ans=min(ans,e*e);
       }
   }
   cout<<ans;
   }

