#include<bits/stdc++.h>
using namespace std;
long long a,b,s=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("TongUoc.Inp ","r",stdin);
   freopen("TongUoc.Out","w",stdout);
    cin>>a>>b;
    for(int x=1;x<=sqrt(a);x++)
    {
        if(a%x==0)
        {
            if(b%(3*x)==0)
                s=s+x;
            long long y=a/x;
            if(b%(3*y)==0 and x<y)
                s=s+y;
        }
    }
    cout<<s;

}
