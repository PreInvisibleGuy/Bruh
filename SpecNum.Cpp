#include <bits/stdc++.h>
using namespace std;
int n,a[500005];
int main()
{
        ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SpecNum.Inp ","r",stdin);
    freopen("SpecNum.Out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)  cin>>a[i];
    long long x,s=0;
    for (int i=1;i<=n;i++)
    {
        x=a[i];
        while (x%2==0)  x=x/2;
        while (x%3==0)  x=x/3;
        while (x%5==0)  x=x/5;
        while (x%7==0)  x=x/7;
        if (x==1) s=s+a[i];
    }
    cout<<s;
}
