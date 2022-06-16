#include<bits/stdc++.h>
using namespace std;
int n,k,a[10001];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("KSort.Inp","r",stdin);
freopen("KSort.Out","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+k);
    for(int i=1;i<=k;i++)
        cout<<a[i]<<' ';
}
