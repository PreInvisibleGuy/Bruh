#include<bits/stdc++.h>
using namespace std;
long long d[100001],a[100001],n;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TINHOC.Inp   ","r",stdin);
freopen("TINHOC.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    long long s=a[1];
   for(int i=1;i<=n;i++)
        {
            d[a[i]]++;
        }
     cout<<s<<endl;
    cout<<d[s];
}
