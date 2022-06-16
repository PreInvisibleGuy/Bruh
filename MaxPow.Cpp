#include<bits/stdc++.h>
using namespace std;
long long n,x,k,s=1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MaxPow.Inp","r",stdin);
    freopen("MaxPow.Out","w",stdout);
    cin>>n>>x;
    k=0,s=1;
    while(n%(s*x)==0)
    {
        k++;
        s=s*x;
 }
 cout<<k;
}
