#include<bits/stdc++.h>
using namespace std;
long long  n,a[200005],q,x,s=0,d[1000001];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("TK2.Inp ","r",stdin);
freopen("TK2.Out","w ",stdout);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
      cin>>a[i];
   for(int i=1;i<=n;i++)
    d[a[i]]++;
   for(int x=1e6-1;x>=0;x--)
    d[x]=d[x]+d[x+1];
    while(q--)
    {
        cin>>x;
        if(x<0)
            cout<<n<<'\n';
        else
             if(x>1e6)
               cout<<0<<'\n';
        else
              cout<<d[x]<<'\n';
    }

}

