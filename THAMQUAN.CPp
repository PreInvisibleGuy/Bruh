#include<bits/stdc++.h>
using namespace std;
long long a[30005],m,n,b[30005],s=0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("thamquan.inp","r",stdin);
    freopen("thamquan.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    sort(b+1,b+m+1);
    sort(a+1,a+n+1,greater<long long>());
    for(int i=1;i<=n;i++)
        s=s+a[i]*b[i];
    cout<<s;
}
