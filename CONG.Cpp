#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,n;
   freopen("CONG.Inp","r",stdin);
   freopen("CONG.Out","w",stdout);
    cin>>a>>b;
    cin>>c>>d;
    for(int i=min(b,d);i<=b*d;i++)
    {
        if(i%b==0 and i%d==0)
        {
            n=i;
            break;
        }
    }
    a=a*(n/b);
    c=c*(n/d);
    long long m=a+c;
    for(int i=1;i<=max(m,n);i++)
    {
        if(m%i==0 and n%i==0)
        {
            m=m/i;
            n=n/i;
        }
    }
    cout<<m<<" "<<n;


}
