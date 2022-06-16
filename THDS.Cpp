#include<bits/stdc++.h>
using namespace std;
int a[200002],b[200002],n,m;
long long tong(int s[200002],int n)
{
  if(n==0)
    return s[0];
  else
  {
      return s[n]+tong(s,n-1);
  }
}
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("THDS.Inp     ","r",stdin);
freopen("THDS.Out  ","w ",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=m;i++)
        cin>>b[i];
    cout<<tong(a,n)<<endl;
    cout<<tong(b,m);
}
