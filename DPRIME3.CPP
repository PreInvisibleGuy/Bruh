#include<bits/stdc++.h>
using namespace std;
long long n,s,x=2,y,z,q=0;
int ktra(int x)
{
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("DPRIME3.INP ","r",stdin);
freopen("DPRIME3.Out","w ",stdout);
    cin>>n;
    for(int i=3;i*i<=n;i++)
    {
        if(ktra(i))
        {
            y=i;
            z=x*x+y*y;
            if(ktra(z)==1 and z<=n)
            {
                cout<<x<<' '<<y<<' '<<z<<'\n';
                q=1;
            }
        }
    }
    if(q==0)
        cout<<-1;
}
