#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("HexaGonNum.Inp","r",stdin);
    freopen("HexaGonNum.Out","w ",stdout);
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    cout<<max({a+d,b+e,c+f});

}
