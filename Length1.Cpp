#include<bits/stdc++.h>
using namespace std;
long long n,q,s[200005],a[200005],x,i,j;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Length1.Inp  ","r",stdin);
freopen("Length1.Out","w ",stdout);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+a[i];
    while(q--)
    {
        cin>>i>>j;
        x=s[j]-s[i];
        cout<<x-(j-i)*a[i]<<'\n';
        }
}
