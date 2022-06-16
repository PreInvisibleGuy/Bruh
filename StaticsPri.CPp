#include<bits/stdc++.h>
using namespace std;
const int mv=1e6;
bool nt[mv+1];
int s[mv];
long long q,a,b;
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
    freopen("StaticsPri.Inp ","r",stdin);
     freopen("StaticsPri.Out","w ",stdout);
eratos();
s[0]=s[1]=0;
for(int i=2;i<=mv;i++)
{
 s[i]=s[i-1]+(nt[i]==true);
}
 cin>>q;
 while(q--)
 {
     cin>>a>>b;
     cout<<s[b]-s[a-1]<<'\n';
 }
}
