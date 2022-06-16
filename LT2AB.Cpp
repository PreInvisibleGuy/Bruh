#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x,s;
      freopen("LT2AB.Inp","r",stdin);
    freopen("LT2AB.Out","w",stdout);
    cin>>a>>b;
    s=0;
    x=1;
    while(x<=b)
    {
        if(x>=a)
        {
            s++;
        }
    x=x*2;
    }
    cout<<s;
}
