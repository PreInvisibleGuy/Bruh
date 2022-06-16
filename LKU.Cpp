#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],m=0,j;
int main()
{
    freopen("LKU.Inp","r",stdin);
    freopen("LKU.Out","w",stdout);
    cin>>n;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
          m++;
          a[m]=i;
          j=n/i;
          if(j!=i)
          {
              m++;
              a[m]=j;
          }
        }
    }
    sort(a+1,a+1+m);
    for(int i=1;i<=m;i++)
         cout<<a[i]<<" ";
}
