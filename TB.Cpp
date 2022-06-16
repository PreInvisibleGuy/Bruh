#include<bits/stdc++.h>
using namespace std;
long long a[100001],b[100001];
int main()
{
    long long n,s;
   ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("TB.Inp","r",stdin);
    freopen("TB.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>b[i];
    a[1]=b[1];
    s=a[1];
    cout<<a[1]<<" ";
    for(int i=2;i<=n;i++)
    {
        a[i]=b[i]*i-s;
        s=s+a[i];
        cout<<a[i]<<" ";
    }
}
