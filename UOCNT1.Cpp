#include<bits/stdc++.h>
using namespace std;
long long ktra(long long n)
{
    if(n<2)
        return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
          return 0;
    return 1;
}
int main()
{
    long long n,dem=0;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(ktra(i)==1)
                dem++;
            if(n/i!=i and ktra(i)==1)
                dem++;
        }
    }
    cout<<dem;
}
