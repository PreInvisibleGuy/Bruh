#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,a[101];
    freopen("Smallest.Inp","r",stdin);
    freopen("Smallest.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
     sort(a+1,a+1+n);
    if(x<a[1])
    {
        cout<<"smallest";
        return 0;
    }
    cout<<"no";
}
