#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s=1,x=1;
    freopen("DIVINAT.INP","r",stdin);
    freopen("DIVINAT.OUT","w",stdout);
    cin>>n;
    for(int i=2;i<n;i++)
    {
        s=__gcd(i,n);
        if(s==1)
            x++;
    }
    cout<<x;
}
