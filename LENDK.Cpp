#include<bits/stdc++.h>
using namespace std;
int n,k,a[500005];
long long s,mi[500005],ans=-1e18;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("LENDK.Inp  ","r",stdin);
 freopen("LENDK.Out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)  cin>>a[i];
        s=mi[0]=0;
    for(int j=1;j<=n;j++)
    {
        s=s+a[j];
        if(j<k)
        {
          mi[j]=s;
        }
        else
        {
            int i=j%k;
            ans=max(ans,s-mi[i]);
            mi[i]=min(mi[i],s);
        }
    }
    cout<<ans;

}
