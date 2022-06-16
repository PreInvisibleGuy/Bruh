#include <bits/stdc++.h>
using namespace std;
long long n,k,b,A[20002],dem=0;
int main()
{
    freopen ("SUM.INP","r",stdin);
    freopen ("SUM.OUT","w",stdout);
    cin>>n>>k>>b;
    for (long long i=1;i<=n;i++){
        cin>>A[i];
        A[i+n]=A[i];
        dem+=A[i];
    }
    b=b%n;
    dem=dem*(k/n);
    k=k%n;
    for (long long i=1;i<=k;i++)
    {
        dem+=A[i+b-1];
    }
    cout<<dem;
}
