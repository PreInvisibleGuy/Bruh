#include <bits/stdc++.h>
using namespace std;
const int mn=1e6+11;
int m,n,k;
int ta,tb;
int a[mn],b[mn];
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("vanchuyen.inp","r",stdin);
    freopen("vanchuyen.out","w",stdout);
    cin>>n>>m>>ta>>tb>>k;
    if (k>=min(m,n))  return cout<<-1,0;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int j=1;j<=m;j++)
        cin>>b[j];
    int j=1,res=0;
    for (int i=1;i<=k+1&&i<=n;i++){
        while (j<=m&&b[j]<a[i]+ta)  j++;
        int rem=k-i+1;
        if (j+rem>m)  return cout<<-1,0;
        res=max(res,b[j+rem]+tb);
    }
    cout<<res;
}

