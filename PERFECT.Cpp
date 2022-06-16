#include<bits/stdc++.h>
using namespace std;
long long a[101],n,s=0,m;
long long ktra(long long x)
{
    long long dem=0;
    for(long long i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
           dem=dem+i;
           if(x/i!=i)
            dem=dem+x/i;
        }
    }
    return dem-x;
}
long long tong(long long x)
{
    long long dem=0;
    while(x>0)
    {
        long long m=x%10;
        dem=dem+m;
        x=x/10;
    }
    return dem;
}
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("PERFECT.Inp    ","r",stdin);
freopen("PERFECT.out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
           m=tong(a[i]);
           if(ktra(m)==m)
            s++;
    }
  cout<<s;
}
