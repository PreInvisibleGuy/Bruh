#include<bits/stdc++.h>
using namespace std;
long long n;
long long demu(long long a)
{
    long long dem=0;
    for(long long  i=1;i*i<=a;i++)
    {
          if(a%i==0)
          {
              if(i*i==a)
                 dem++;
            else
              dem=dem+2;

          }
    }
    return dem;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CHIAQUA.INP  ","r",stdin);
freopen("CHIAQUA.OUT ","w ",stdout);
      cin>>n;
      cout<<demu(n);

}
