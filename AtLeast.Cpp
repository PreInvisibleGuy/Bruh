#include<bits/stdc++.h>
using namespace std;
long long n,a[600006],x,s=0;
int main()
{
    freopen("AtLeast.Inp ","r",stdin);
    freopen("AtLeast.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for(int i=1;i<=n;i++)
    {
        s=s+abs(a[i]-x);
    }
    cout<<s;
}
