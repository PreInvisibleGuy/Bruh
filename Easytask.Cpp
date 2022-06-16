#include<bits/stdc++.h>
using namespace std;
long long n,a[1000006];
long long ans,s=0,x,mi,m;
const int mv=1e6;
bool nt[mv+1];
void eratos()
{
    memset(nt,true,sizeof nt);
    nt[1]=false;
    for(int i=1;i<=sqrt(mv);i++)
    {
        if(nt[i])
        {
            int t=i;
            while(t*i<=mv)
            {
                nt[t*i]=false;
                t++;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Easytask.Inp  ","r",stdin);
freopen("Easytask.Out","w ",stdout);
cin>>n;
for(int i=1;i<=n;i++)
    cin>>a[i];
eratos();
ans=a[2];
s=a[1];
mi=a[1];
for(int R=2;R<=n;R++)
 {
      s=s+a[R];
      if(nt[R]==true)
{
    m=a[R];

    x=s-mi;
    ans=max({ans,x,m});
    mi=min(mi,s-m);
}
 }

cout<<ans;

}
