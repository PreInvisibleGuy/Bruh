#include<bits/stdc++.h>
using namespace std;
long long a,b,x,y,z;
int main()
{

          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("balls.Inp     ","r",stdin);
freopen("balls.Out ","w ",stdout);
    cin>>a>>b;
    cin>>x>>y>>z;
    long long s,s1,s2,s3;
    s=2*x;
    s1=2*y;
    s2=3*z;
    s3=s+s1+s2;
    if(s3<a+b)
    {
        cout<<0;
        return 0;
    }
    else
        cout<<s3-a-b;
}
