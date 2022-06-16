#include<bits/stdc++.h>
using namespace std;
long long l,r,s=0,x;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("sumif.inp  ","r",stdin);
freopen("sumif.out ","w ",stdout);
    cin>>l>>r;
    for(long long i=l;i<=r;i++)
    {
        if(i%13==0)
           {
            s=i;
            break;
           }
    }
    for(long long i=r;i>=l;i--)
    {
        if(i%13==0)
            {
                x=i;
                break;
            }
    }
    long long t=(x+s)*((x-s)/13+1)/2;
    long long a=(l+r)*((r-l)+1)/2;
    cout<<a-t;
}
