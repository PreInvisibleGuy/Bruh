#include<bits/stdc++.h>
using namespace std;
const int mv=1e6;
bool nt[mv+1];
long long a,b,dem=0;
void eratos()
{
    memset(nt,true,sizeof nt);
    nt[1]=false;
    for(int i=1;i*i<=mv;i++)
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
//freopen("NGUYENTO.INP ","r",stdin);
//freopen("NGUYENTO.Out","w ",stdout);
    cin>>a>>b;
eratos();
for(int i=a;i<=b;i++)
    if(nt[i])
       dem++;
       cout<<dem;
}
