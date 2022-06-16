#include<bits/stdc++.h>
using namespace std;
long long n,x[1001],y[1001],z[1001],d[3003],e[3003];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("CreatN.Inp ","r",stdin);
   freopen("CreatN.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=3*n;i++)
          cin>>d[i];
    sort(d+1,d+1+3*n);
    for(int i=1;i<=n;i++)
    {
        int t=(i-1)*3;
        x[i]=d[t+1];
        y[i]=d[t+2];
        z[i]=d[t+3];
    }
    int mem,tmp;
    mem=0;
    for(int i=n;i>=1;i--)
    {
        tmp=x[i]+y[i]+z[i]+mem;
        e[i]=tmp%10;
          mem=tmp/10;
    }
    if(mem>0)
        cout<<mem;
    for(int i=1;i<=n;i++)
          cout<<e[i];

}
