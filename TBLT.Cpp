#include<bits/stdc++.h>
using namespace std;
const int mv=123456789;
long long a,b,c,n,m,k,s=0,tam;
int main()
{
           ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TBLT.INP     ","r",stdin);
freopen("TBLT.Out ","w ",stdout);
    cin>>a>>b>>c;
    cin>>n>>m>>k;
    tam=1;
    for(int i=1;i<=n;i++)
    {
        tam=tam*a;
        tam=tam%mv;
    }
    a=tam;
    tam=1;
    for(int i=1;i<=m;i++)
    {

        tam=tam*b;
        tam=tam%mv;
    }
    b=tam;
    tam=1;
    for(int i=1;i<=k;i++)
    {

        tam=tam*c;
        tam=tam%mv;
    }
    c=tam;
    s=(a+b+c)%mv;
    cout<<s;
}
