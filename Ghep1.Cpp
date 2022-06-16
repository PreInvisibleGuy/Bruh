#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Ghep1.Inp  ","r",stdin);
freopen("Ghep1.Out","w ",stdout);
    string a[10001];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=n;i>=1;i--)
        cout<<a[i];
}


