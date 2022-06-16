#include<bits/stdc++.h>
using namespace std;
long long n,p[100001],s[100001];
pair<long long,int> x[100001];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("POST.Inp", "r", stdin);
    freopen("POST.Out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i].first;
        x[i].second=i;
    }
    sort(x+1,x+1+n);
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+x[i].first;
    long long u;
    for(long long i=1;i<=n;i++)
    {
        u=x[i].first*i-2*s[i]+s[n]-x[i].first*(n-i);
        p[x[i].second]=u;
    }
    for(int i=1;i<=n;i++)
        cout<<p[i]<<' ';
}
