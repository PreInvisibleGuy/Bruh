#include<bits/stdc++.h>
using namespace std;
long long n,a[21];
long long tong(long long x)
{
long long s=0;
for(long long i=1;i<=sqrt(x);i++)
{

    if(x%i==0)
    {
        s=s+i;
        if(x/i!=i)
            s=s+x/i;
    }
}
return s;
}
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MADT.INP  ","r",stdin);
freopen("MADT.OUT","w ",stdout);
   cin>>n;
   for(int i=1;i<=n;i++)
    {
        cin>>a[i];
       long long t=tong(a[i]);
       cout<<t<<'\n';
   }


}
