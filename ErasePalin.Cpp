#include<bits/stdc++.h>
using namespace std;
int a[20001],t,ans=0,s=0,n;
bool Erase(int x,int a[] ,int n)
{
    int b[n],m=0;
    for(int i=1;i<=n;i++)
        if(a[i]!=x) b[++m]=a[i];
    for(int i=1;i<=m;i++)
        if(b[i]!=b[m-i+1])
        return false;
    return true;
}
string solve(int a[],int n)
{
  int l=1,r=n;
  while(l<=r)
  {
      if(a[l]==a[r])
      {
          l++;r--;
      }
      else
      {
          bool ans1=Erase(a[l],a,n);
          bool ans2=Erase(a[r],a,n);
          if(ans1==true or ans2==true)
          {
              return "Yes";
          }
          else
             return "No";
      }
  }
return "Yes";
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("ErasePalin.Inp","r",stdin);
//freopen("ErasePalin.Out","w ",stdout);
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        cout<<solve(a,n)<<'\n';


    }
}
