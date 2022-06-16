#include<bits/stdc++.h>
using namespace std;
int n,a[101],s=0,k=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("StoneE.Inp     ","r",stdin);
freopen("StoneE.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<max({a[1]+a[n],a[1]+a[2],a[n]+a[n-1]});
}
