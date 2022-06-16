#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,a[101];
    freopen("Biggest.Inp","r",stdin);
    freopen("Biggest.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
     sort(a+1,a+1+n);
    if(x>a[n])
    {
        cout<<"biggest";
        return 0;
    }
    cout<<"no";
}
