#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[10001],x=0;
     freopen("CheckPermuE.Inp","r",stdin);
     freopen("CheckPermuE.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        if(a[i]==i)
            x=x+1;
    }
    if(x==n)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";

}
