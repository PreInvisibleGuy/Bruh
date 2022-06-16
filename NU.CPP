#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,n=0,m=0,a,b;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("NU.Inp","r",stdin);
    freopen("NU.Out","w ",stdout);
    cin>>x>>y;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            n++;
            a=x/i;
            if(i!=a)
                n++;
        }
    }
    for(int i=1;i*i<=y;i++)
    {
        if(y%i==0)
        {
            m++;
            b=y/i;
            if(i!=b)
              m++;

        }

    }
    if(n==m)
    {
        cout<<x<<' '<<y;
        return 0;
    }
    if(n>m)
    {
        cout<<x;
        return 0;
    }
    if(n<m)
    {
        cout<<y;
        return 0;
    }
}
