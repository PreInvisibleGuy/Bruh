#include<bits/stdc++.h>
using namespace std;
long long a[10001],n,s=0;
int main()
{
         ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("LayBi.Inp   ","r",stdin);
freopen("LayBi.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++)
        s=s+abs(a[i]-a[1]);
    cout<<s;
}

