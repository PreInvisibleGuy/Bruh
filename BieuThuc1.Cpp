#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,m,n,o;
    string x,y,z;
       freopen("BieuThuc1.Inp","r",stdin);
    freopen("BieuThuc1.Out","w",stdout);
    cin>>a>>b>>c>>d;
    cin>>x>>y>>z;
    if(x[0]=='+')
    {
        m=a+b;
    }
    else
        m=a-b;
    if(y[0]=='+')
    {
        n=m+c;
    }
    else
        n=m-c;
    if(z[0]=='+')
        o=n+d;
    else
        o=n-d;
    cout<<o;
}
