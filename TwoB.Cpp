#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s=0,n;
    freopen("TwoB.Inp","r",stdin);
    freopen("TwoB.Out","w",stdout);
    cin>>a>>b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(a<b)
            swap(a,b);
        if(a<0)
            break;
        s=s+a;
        a--;
    }
    cout<<s;
}

