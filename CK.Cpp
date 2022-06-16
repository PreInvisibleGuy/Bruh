#include<bits/stdc++.h>
using namespace std;
bitset<20> b;
int n,a[101],ans=1e6,x=0,e;
void solve()
{
   int p1,p2;
   p1=p2=0;
   for(int i=0;i<n;i++)
    if(b[i]==1) p1+=a[i];
   else
      p2+=a[i];
   ans=min(ans,abs(p1-p2));
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CK.Inp   ","r",stdin);
freopen("CK.Out ","w ",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    e=1<<n;
    for(int i=1;i<e;i++)
    {
    b=bitset<20>(i);
    solve();
    }
    cout<<ans;
}
