#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,n;
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("DOITIEN.Inp   ","r",stdin);
freopen("DOITIEN.Out ","w ",stdout);
    cin>>n;
    a=n/10000;
    n=n-10000*a;
    b=n/5000;
    n=n-b*5000;
    c=n/2000;
    n=n-c*2000;
    d=n/1000;
    cout<<1000<<' '<<d<<endl;
    cout<<2000<<' '<<c<<endl;
    cout<<5000<<' '<<b<<endl;
    cout<<10000<<' '<<a<<endl;

}
