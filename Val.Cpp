#include<bits/stdc++.h>
using namespace std;
int n,a[100001];
long long s=0;
int main()
{

    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("Val.Inp  ", "r", stdin);
   freopen("Val.Out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i=i+2)
    {
        if(a[i]%2==0)
            s=s+a[i];
    }
    cout<<s;
}
