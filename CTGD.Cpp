#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CTGD.Inp","r",stdin);
    freopen("CTGD.Out","w",stdout);
    long long a,b,c,d,e,f,x=0;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;
    long long n=max({a,c,e});
    long long m= min({b,d,f});
    if(m<=0)
        {
            x=0;
            cout<<x;
            return 0;
        }
    if(n<=0)
        n=1;
    x=m-n+1;
     cout<<x;

}
