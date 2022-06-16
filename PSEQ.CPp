#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],s[100001],k,d;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("PSEQ.inp","r",stdin);
     freopen("PSEQ.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    s[i]=s[i-1]+a[i];
    for(int i=1;i<=n;i++)
       for(int j=i;j<=n;j++)
        if(s[j]-s[i-1]==k) d++;
    cout<<d;
}
