#include<bits/stdc++.h>
#define ll long long
#define nmax 1000006
using namespace std;
ll dem(ll x)
{
    ll cnt=0;
    for(ll i = 1;i<=sqrt(x);i++)
    {
        if(x%i==0) cnt+=2;
    }
    ll k = sqrt(x);
    if(k*k==x) cnt-=1;
    return cnt;
}
bool sx(ll y,ll z)
{
    if(dem(y)<dem(z)) return true;
    else return false;
}
ll n,a[nmax],cnt=0,cnt2=1,b[nmax];
int main()
{
    freopen("class.inp" , "r" , stdin);
    freopen("class.out" , "w" , stdout);
    cin>>n;
    for(ll i = 1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1,sx);
    for(ll i = 1;i<=n;i++)
    {
       if(dem(a[i])!=dem(a[i+1])) cnt++;
    }
    cout<<cnt;
    cout<<endl;
    for(ll i = 1;i<=n;i++)
    {
        if(dem(a[i])==dem(a[i+1])) cnt2++;
        else
        {
            cout<<dem(a[i])<<" "<<cnt2;
            cout<<"\n";
            cnt2=1;
        }
    }
}
