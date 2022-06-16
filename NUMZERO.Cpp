#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x=0;
    freopen("NUMZERO.INP","r",stdin);
   freopen("NUMZERO.OUT","w",stdout);
    cin>>n;
    while(n>0)
    {
        x=x+n/5;
        n=n/5;
    }
    cout<<x;
}
