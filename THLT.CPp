#include<bits/stdc++.h>
using namespace std;
long long a,b,s=0,n;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("THLT.INP     ","r",stdin);
freopen("THLT.OUt ","w ",stdout);
    cin>>a>>b>>n;
    long long c=a;
    for(int i=2;i<=n;i++)
    {
        c=c*a;
    }
    long long d=b;
    for(int i=2;i<=n;i++)
    {
        d=d*b;
    }
    s=s+c+d;
    cout<<s;
}
