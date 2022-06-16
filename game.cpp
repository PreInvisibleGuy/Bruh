#include<bits/stdc++.h>
using namespace std;
int a[101],b[101],n,e;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("game.inp","r",stdin);
     freopen("game.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++)
    b[i]=a[i]-a[1];
    e=__gcd(b[2],b[3]);
    for(int i=2;i<=n;i++)
        e=__gcd(e,b[i]);
    for(int i=2;i<=e;i++)
    {
        if(e%i==0)
        {
            cout<<i<<' ';
        }
    }



}
