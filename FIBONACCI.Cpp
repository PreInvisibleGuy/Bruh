#include<bits/stdc++.h>
using namespace std;
long long d[1000001],a,dem=0;
bool ktfb(long long n)
{
    long long fb,f0,f1;
    bool kt;
    f0=1;
    f1=1;
    if(n<0)
        kt=false;
    else
    {
         if(n==0)
        kt=true;
        else
        {
            fb=f0+f1;
            while(f0+f1<=n)
            {
                fb=f0+f1;
                f0=f1;
                f1=fb;
            }
            if(fb==n)
                kt=true;
            else
                kt=false;
        }
    }
    return kt;
}
int main()
{
    freopen("FIBONACCI.INP","r",stdin);
    freopen("FIBONACCI.OUT","w",stdout);
   while(!cin.eof())
   {
       cin>>a;
   if(ktfb(a))
   {
       dem++;
       d[dem]=a;
   }
   }
cout<<dem<<endl;
for(int i=1;i<=dem;i++)
    cout<<d[i]<<" ";
        return 0;
}
