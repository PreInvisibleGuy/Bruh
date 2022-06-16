#include<bits/stdc++.h>
using namespace std;
int n,dem=0,s[300003];
int a[300003];
int main()
{
        ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("FAMILIAR.INP","r",stdin);
freopen("FAMILIAR.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
    sort(a+1,a+1+n);
    s[n]=a[n]+1;
    for(int i=n-1;i>=1;i--)
        s[i]=max(s[i+1],a[i]+n-i+1);
    for(int i=1;i<=n;i++)
    {
        if(a[i]+n>=s[i+1])
            dem++;
    }
    cout<<dem;
}
