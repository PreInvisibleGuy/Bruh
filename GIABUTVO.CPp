#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("GIABUTVO.INP ","r",stdin);
  freopen("GIABUTVO.OUT ","w ",stdout);
    int a,b,c,d,m,n;
    cin>>a>>b>>m;
    cin>>c>>d>>n;
    int s=a*c/__gcd(a,c);
    b=(s/a)*b;
    m=(s/a)*m;
    d=(s/c)*d;
    n=(s/c)*n;
    a=s;c=s;
    int tv=abs(m-n)/abs(b-d);
    int tb=(m-b*tv)/a;
    cout<<tb<<' '<<tv;



}
