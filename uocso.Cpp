#include<bits/stdc++.h>
using namespace std;
int a[200001],b[200002],n,m,d[200002],mv;
void sub1()
{
    int ans=0;
    for(int i=1;i<=m;i++)
    {
        int s=0;
        for(int j=1;j<=n;j++)
            if(a[j]%b[i]==0)
            s++;
        ans=max(ans,s);
    }
    cout<<ans;
}
void sub2()
{
    memset(d,0,sizeof d);
    for(int i=1;i<=n;i++)
        d[a[i]]++;
   int ans=0,s,t;
   sort(b+1,b+1+m);
   for(int i=1;i=n;i++)
   {
       if(i>1 and b[i]==b[i-1])
        continue;
       s=0;t=0;
       while(t*b[i]<=mv)
        {
       s=s+d[t*b[i]];t++;
       }
       ans=max(ans,s);
   }
   cout<<ans;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("UocSo.Inp    ","r",stdin);
  freopen("UocSo.Out ","w ",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    mv=*max_element(a+1,a+1+n);
    if(n<=1000 and m<=1000) sub1();
    else
        sub2();

}

