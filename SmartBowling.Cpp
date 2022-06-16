#include<bits/stdc++.h>
using namespace std;
long long n,k,a[500006],s;
int main()
{
       freopen("SmartBowling.Inp","r",stdin);
     freopen("SmartBowling.Out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    if(k>=n)
    {
        cout<<n;
        return 0;
    }
    s=k;
    for(int i=1;i<=n;i++)
        s=s+a[i];
    for(int i=n-k+1;i<=n;i++)
        s=s-a[i];
    cout<<s;

}
