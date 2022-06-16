#include<bits/stdc++.h>
using namespace std;
long long s=0,a[1000],n,x=0,t=0,b;
int tong(int x)
{
    long long s=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
            int m=n/i;
            if(m!=i)
                 s=s+m;
        }
    }
    return s;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   //freopen("PERFECT.inp","r",stdin);
   //freopen("PERFECT.out","w",stdout);
 cin>>n;
for(long long i=1;i<=n;i++)
{
    x=0;
    t=0;
    cin>>a[i];
    while(a[i]!=0)
    {
        b=a[i]%10;
        x=x+b;
        a[i]=a[i]/10;
    }
    for(long long j=1;j<x;j++)
    {
     if(x%j==0) t=t+j;
    }
    if(t==x)
    {
        s=s+1;
        cout<<t<<' ';
    }
 }
cout<<s;
}
