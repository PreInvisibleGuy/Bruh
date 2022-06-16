#include<bits/stdc++.h>
using namespace std;
long long k,s=0,x,a;
int ktra(long long  n)
{
    int t;
    for(long long  i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 1;


    }
    return 0;

}
long long getnum(int i,int j,int k)
{
    long long x=0;
    for(int e=1;e<=k;e++)
        x=x*10+i;
    x=x*10+j;
    for(int e=1;e<=k;e++)
          x=x*10+i;
    return x;
}

int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("BalancePri.Inp","r",stdin);
    freopen("BalancePri.Out","w ",stdout);

    cin>>k;
    for(int i=1;i<=9;i++)
        for(int j=0;j<=9;j++)
            if(i!=j)
    {
        x=getnum(i,j,k);
        if(ktra(x)==0)
            s++;
    }
    cout<<s;

}
