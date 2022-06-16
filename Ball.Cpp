#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n=3,a[4];
        freopen("Ball.Inp","r",stdin);
    freopen("Ball.Out","w",stdout);
    for(int i=1;i<=n;i++)
    {

        cin>>a[i];
    }
    sort(a+1,a+1+n);
     cout<<a[2];

}
