#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[100001],b[100001],s;
int fi(int s)
{
    int i,j,ans;
    i=1;j=m;
    ans=abs(a[1]+b[1]-s);
    while(i<=n and j>=1)
    {
        if(a[i]+b[j]==s)
            return 0;
        ans=min(ans,abs(a[i]+b[j]-s));
        if(a[i]+b[j]<s)
            i++;
        else
            j--;
    }
    return ans;
}
int main()
{
          ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SEQGAME.INP ","r",stdin);
    freopen("SEQGAME.OUT","w",stdout);
  cin>>n>>m>>k;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  for(int i=1;i<=m;i++)
    cin>>b[i];
sort(a+1,a+1+n);
sort(b+1,b+1+m);
  for(int i=1;i<=k;i++)
  {
      cin>>s;
      cout<<fi(s)<<'\n';
  }
}
