#include<bits/stdc++.h>
using namespace std;
const int mv=1e7;
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
  freopen("SPRIME.INP ","r",stdin);
freopen("SPRIME.OUT","w ",stdout);
    int a,b;
    cin>>a>>b;
    eratos();
    for(int i=a;i<=b;i++)
    {
        int t=i,s=1;
        if(nt[i]==true)
        {
            while(t>0)
        {
            if(nt[t]==false)
            {
                s=0;
                break;
            }
            t=t/10;
        }
        }
        if(s==1 and nt[i]==true)
            cout<<i<<'\n';
    }
}
