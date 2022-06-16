#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,x=0,u;
     freopen("CountDivisor.Inp ","r",stdin);
    freopen("CountDivisor.Out","w",stdout);
    cin>>a>>b>>c;
    long long n=__gcd(a,b);
    long long m=__gcd(n,c);
    for(int i=1;i*i<=m;i++)
    {
        if(m%i==0)
        {
            x=x+1;
            u=m/i;
            if(u!=i)
                x=x+1;
        }

    }
    cout<<x;

}
