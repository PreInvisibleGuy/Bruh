#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool nt(ll x)
{
    for(ll i = 2;i<=sqrt(x);i++)
    {
        if(x%i==0) return false;
    }
    return x>1;
}
ll f1=1,f2=1,n,f3=2;
int main()
{
    cin>>n;
    while(f3<=n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
        if(nt(f1)==true) cout<<f1<<" ";
        else if(nt(f2)==true) cout<<f2<<" ";
        else if(nt(f3)==true) cout<<f3<<" ";
    }
}
