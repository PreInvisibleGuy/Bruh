#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s=0;
      freopen("TwoSumdigits.Inp ","r",stdin);
    freopen("TwoSumdigits.Out","w",stdout);
    cin>>a>>b;
    while(a>0)
    {
        s=s+a%10;
        a=a/10;
    }
    while(b>0)
    {
        s=s+b%10;
        b=b/10;
    }
    cout<<s;
}
