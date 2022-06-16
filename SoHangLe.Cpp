#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[10001],s=0;
    freopen("SoHangLe.Inp ","r",stdin);
    freopen("SoHangLe.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2!=0)
            s=s+1;
    }
    cout<<s;
}
