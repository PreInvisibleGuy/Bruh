#include<bits/stdc++.h>
using namespace std;
const int mv=1e7;
bool nt[mv+1];
long long n,t;
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
  freopen("LKNT.Inp","r",stdin);
   freopen("LKNT.Out","w",stdout);
    eratos();
    cin>>t;
    while(t--)
    {
    cin>>n;
     for(int i=2;i<=n;i++)
        if(nt[i])
          cout<<i<<' ';
     cout<<endl;
    }
}

