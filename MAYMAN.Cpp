#include<bits/stdc++.h>
using namespace std;
int n,j=1,k,mp[1000001],p;
int m,l,r,m1,uu,vv,u=0,v=0;
pair<int,int> a[1000001];
int main()
{
  cin>>n>>p;
  for(int i=1;i<=n;i++){
    cin>>a[i].first;
    a[i].second=i;
    }
    sort(a+1,a+1+n);
    mp[1]=a[1].second;
    for(int i=2;i<=n;i++)
        mp[i]=min(mp[p-1],a[i].second);
    for(int j=1;j<=n;j++)
    {
        if(a[j].first-a[1].first<p)
        {
            continue;
        }
        l=1;r=j-1;
        while(l<=r)
        {
            m=(l+r)/2;
            if(a[j].first-a[m].first>=p)
               {
                   m1=m;l=m+1;
               }
            else r=m-1;
        }
        uu=a[j].second;
        vv=mp[m1];
        if(uu-vv>u-v){u=uu;v=vv;}
    }
    if(u==0) cout<<0;
    else  cout<<u<<' '<<v;


}
