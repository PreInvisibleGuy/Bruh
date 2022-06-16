#include<bits/stdc++.h>
using namespace std;
long long s=0,t,b[100000],k=1,n;
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("CountPairs.INP","r",stdin);
    freopen("CountPairs.OUT","w",stdout);
    cin>>t;
    while(t--)
    {
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        if(n-i*2>0)
         s=s+(n-i*2);
        if(n-i*2<=0)
        {
        b[k]=s;
         break;
        }
    }
    cout<<b[k]<<'\n';
    k++;
    s=0;

        }

}
