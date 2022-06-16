#include<bits/stdc++.h>
using namespace std;
int solve(string x,string y,string z)
{
    int len=0,lenx=x.size(),leny=y.size(),lenz=z.size();
    if(x[lenx-1]==y[0])
    {
        len=max(len,lenx+leny);
        if(y[leny-1]==z[0])
            len=lenx+leny+lenz;
    }
    if(x[lenx-1]==z[0])
    {
       len=max(len,lenx+lenz);
    }
    return len;
}
int main()
{
     string x,y,z;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("GhepLT.Inp  ","r",stdin);
freopen("GhepLT.Out","w ",stdout);
     cin>>x>>y>>z;
    int x1= solve(x,y,z);
    int x2=solve(x,z,y);
    int x3=solve(y,x,z);
    int x4=solve(y,z,x);
    int x5=solve(z,x,y);
    int x6=solve(z,y,x);
int ans= max({x1,x2,x3,x4,x5,x6});
 if(ans==0)
 {
     cout<<max({x.size(),y.size(),z.size()});
 }
 else
    cout<<ans;
}
