#include<bits/stdc++.h>
using namespace std;
long long a[1001],n,s=0;
int ktra(long long x)
{
    if(x<2)
        return 0;
    for(int i=2;i*i<=x;i++)
      if(x%i==0)
        return 0;
    return 1;
}
int main()
{
    cin>>n;
    a[1]=a[2]=1;
    for(int i=3;i<=50;i++)
        a[i]=a[i-1]+a[i-2];
    for(int i=1;i<=50;i++)
        if(a[i]<=n)
    {
      if(ktra(a[i]))
           cout<<a[i]<<' ';
    }
    else
        break;
}
