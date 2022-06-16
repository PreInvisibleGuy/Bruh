#include<bits/stdc++.h>
using namespace std;
long long x,y,z,t=0,u;
int main()
{
    freopen("TBG.Inp", "r", stdin);
    freopen("TBG.Out", "w", stdout);
    cin>>x>>y>>z;
    u=z*(x-y);
    t=u/y;
    if(u%y>0)
        t++;
    cout<<t;

}
