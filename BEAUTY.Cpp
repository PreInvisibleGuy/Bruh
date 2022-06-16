#include <bits/stdc++.h>
using namespace std;
int nto( long long x)
{
    long long s=0;
    while (x>0)
    {
        s+=(x%10)*(x%10);
        x=x/10;
    }
    if (s<2)
        return 0;
    for(int i=2;i<=sqrt(s);i++)
        if (s%i==0)
        {
            return 0;
            break;
        }
        return 1;
}
int main()
{
  freopen("BEAUTY.inp","r",stdin);
   freopen("BEAUTY.out","w",stdout);
     long long a,b=0;
     cin>>a;
     for(long long i=1;i<100000;i++)
   {
    if(nto(i)==1)
      b=b+1;
    {
      if(b==a)
     {
    cout<<i;
    break;
}
}
}
}
