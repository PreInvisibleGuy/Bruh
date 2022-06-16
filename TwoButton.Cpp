#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x=0;
    freopen("TwoButton.Inp","r",stdin);
    freopen("TwoButton.Out","w",stdout);
    cin>>a>>b;
    long long m=max(a,b);
    long long n=min(a,b);
    x=x+m;
    m=m-1;
    if(m>=n)
    {
        x=x+m;
    }
    if(m<n)
    {
        x=x+min(a,b);
    }
    cout<<x;
}
