#include<bits/stdc++.h>
using namespace std;
long long n,s=0;
int ktra(long long x)
{
     long long dem=1;
     for(int i=2;i*i<=x;i++)
     {
         if(x%i==0)
         {
             dem=dem+i;
             if(x/i!=i)
                 dem=dem+x/i;
         }
     }
     return dem;
}
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SHH.Inp     ","r",stdin);
freopen("SHH.Out  ","w ",stdout);
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(ktra(i)==i)
            s=s+i;
    }
    cout<<s;
}
