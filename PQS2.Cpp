#include<bits/stdc++.h>
using namespace std;
const int mv=1e6+1;
long long f[mv];
bool nt[mv];
void eratos()
{
    memset(nt, true,sizeof nt);
    nt[0]=nt[1]=false;
    for(int i=2;i<sqrt(mv);i++)
     if(nt[i]==true)
     {
         int t=i;
         while(i*t<mv)
         {
                nt[i*t]=false;t++;
         }
     }
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("PQS2.INP ","r",stdin);
freopen("PQS2.Out","w ",stdout);
    long long a,b,t;
    eratos();
    for(int i=1;i<mv;i++)
    {
        f[i]=f[i-1]+(nt[i]==true)*i;
    }
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<f[b]-f[a-1]<<'\n';
    }
}
