#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,sabm,smnc,xmax,s,sadn,xmin;
      freopen("DT.Inp","r",stdin);
    freopen("DT.Out","w",stdout);
    cin>>a>>b;
   long long  smax=0;
    for(int x=0;x<=b;x++)
    {
        sabm=a*x;
        smnc=x*(b-x);
        sadn=b*(a-x);
        s=2*a*b-sabm-smnc-sadn;
        if(s>smax)
        {
            smax=s;
           xmax=x;
        }
    }
    cout<<smax/2<<endl;
    cout<<xmax<<endl;
    long long smin=1e9;
    for(int x=0;x<=b;x++)
    {
        sabm=a*x;
        smnc=x*(b-x);
        sadn=b*(a-x);
        s=2*a*b-sabm-smnc-sadn;
        if(s<smin)
        {
            smin=s;
            xmin=x;
        }
    }
    cout<<smin/2<<endl;
    cout<<xmin<<endl;
}
