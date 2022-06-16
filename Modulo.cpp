#include<bits/stdc++.h>
using namespace std;
long long a[100001],b[100001],c[100001],n,e,m=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     //freopen("Modulo.Inp","r",stdin);
   //  freopen("Modulo.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++)
    b[i]=a[i]-a[1];
    e=__gcd(b[2],b[3]);
    for(int i=2;i<=n;i++)
        e=__gcd(e,b[i]);
    for(long long i=1;i*i<=e;i++)
    {
        if(e%i==0)
        {
            m++;
           c[m]=i;
           if(e/i!=i)
           {
             m++;
             c[m]=e/i;
           }
        }
    }
    sort(c+1,c+1+m);
   for(int i=1;i<=m;i++)
    cout<<c[i]<<' ';



}

