#include<bits/stdc++.h>
using namespace std;
int x[11],n,s;
void xuly()
{
    for(int i=1;i<=n;i++)
        cout<<x[i]<<' ';
    cout<<'\n';
}
void Try(int i,int e)
{
    for(int t=1;e-t>=n-i;t++)
    {
      x[i]=t;
      if(i==n-1)
        {
         x[n]=e-t;
         xuly();
        }
      else
          Try(i+1,e-t);
    }
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("SNPT.Inp  ", "r", stdin);
   freopen("SNPT.Out", "w", stdout);
    cin>>n>>s;
    if(n==1)
    {
        cout<<s;
    }
    else
       Try(1,s);

}
