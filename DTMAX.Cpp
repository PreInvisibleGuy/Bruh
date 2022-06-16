#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int x,y;
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("DTMAX.INP     ","r",stdin);
freopen("DTMAX.OUt ","w ",stdout);
    cin>>a>>b;
    cin>>x>>y;
    cout<<max(a*b,x*y)*2;
}
