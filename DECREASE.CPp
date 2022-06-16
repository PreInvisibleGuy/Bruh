#include<bits/stdc++.h>
using namespace std;
long long n,s=0,x,dem=0;
int main()
{
         ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("DECREASE.INP     ","r",stdin);
freopen("DECREASE.OUT  ","w ",stdout);
    cin>>n;
    while(n>0)
    {
        long long tam=n;
        while(tam>0)
        {
            x=tam%10;
            s=max(x,s);
            tam=tam/10;
        }
        n=n-s;
        dem++;
        s=0;
    }
    cout<<dem;

}
