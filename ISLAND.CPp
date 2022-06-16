#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],s=1,tong=0,d[100001];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("XEPHANG.Inp ","r",stdin);
//freopen("XEPHANG.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++)
    {
        if(a[i]!=a[i-1])
            s++;
    }
    cout<<s;
}
