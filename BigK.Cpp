#include<bits/stdc++.h>
using namespace std;
long long mi[500005],n,x=0,k,ans=0,a[500005];
pair<long long ,long long > s[500005];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("BigK.Inp   ","r",stdin);
freopen("BigK.Out ","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        {
           cin>>a[i];
        }
    s[0].first=0;
    s[0].second=0;
    for(int i=1;i<=n;i++)
    {
     s[i].first=a[i]+s[i-1].first;
     s[i].second=i;
    }
    sort(s+1,s+1+n);
    mi[1]=s[1].second;
    for(int i=2;i<=n;i++)
        mi[i]=min(mi[i-1],s[i].second);

    long long r,l,m,i0,e;
  for(int j=1;j<=n;j++)
  {
      if(s[j].first>=k)
          ans=max(ans,s[j].second);
          else{
            l=1;r=j-1;i0=0;
            while(l<=r)
            {
                    m=(l+r)/2;
                    if(s[j].first-s[m].first>=k){i0=m;l=m+1;}
                    else r=m-1;
            }
            if(i0>0){e=mi[i0];ans=max(ans,s[j].second-e);

          }

  }


}
 cout<<ans;
}


