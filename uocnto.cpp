#include<bits/stdc++.h>
using namespace std;
int t,a,b;
const int mv=1e6;
bool nt[mv+1];
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
int uoc(int x)
{
    int ans=0;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            if(i*i!=x)
                ans=ans+2;
            else
                ans++;
        }
    }
    return ans;
}
int main()
{
     ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("UOCNTO.INP ","r",stdin);
freopen("UOCNTO.Out","w ",stdout);
    eratos();
    cin>>t;
    while(t--)
    {
        int ans=0;
       cin>>a>>b;
       for(int i=a;i<=b;i++)
       {
           int m=uoc(i);
           if(nt[m])
           {
              ans++;
           }
       }
       cout<<ans<<'\n';
    }
}
