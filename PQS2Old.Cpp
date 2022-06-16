#include<bits/stdc++.h>
using namespace std;
const int mv=1e7;
bool nt[mv+1];
long long t,a,b,s=0;
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
freopen("PQS2.INP ","r",stdin);
freopen("PQS2.Out","w ",stdout);
    eratos();
    cin>>t;
    while(t--)
{
    s=0;
     cin>>a>>b;
     for(int i=a;i<=b;i++)
         if(nt[i])
             s=s+i;
    cout<<s<<'\n';
}

}
