#include<bits/stdc++.h>
using namespace std;
long long n,ans=0,s=0,m;
long long c[100001],x[100001];
int dist(int u,int v)
{
    int e,f;
    for(int i=1;i<=n;i++)
    {
        if(c[i]==u)
        {
            e=i;
            break;
        }
    }
    for(int i=n;i>=1;i--)
    {
        if(c[i]==v)
        {
            f=i;
            break;
        }
    }
    return (abs(x[e]-x[f]));
}
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("RedBlackWhite.Inp ","r",stdin);
   freopen("RedBlackWhite.Out","w ",stdout);

     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>x[i];
     }
     for(int i=1;i<=n;i++)
  {
    cin>>c[i];
   }
         int x1=dist(0,1);
         int x2=dist(1,0);
         int x3=dist(0,2);
         int x4=dist(2,0);
         int x5=dist(1,2);
         int x6=dist(2,1);
         cout<<2*max({x1,x2,x3,x4,x5,x6});
}


