#include<bits/stdc++.h>
using namespace std;
int n,a[100001],ans=0,i=1,x=1,j=1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BalanSub.Inp","r",stdin);
    freopen("BalanSub.Out","w ",stdout);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
  while(j<=n)
  {
     if(a[j]>=j-i+1)
     {
         ans=max(ans,j-i+1);
         j++;
     }
     else
     {
    i++;
     }
  }
  cout<<ans;

}
