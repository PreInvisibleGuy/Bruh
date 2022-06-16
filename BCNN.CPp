#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
     freopen("BCNN.INP","r",stdin);
      freopen("BCNN.OUT","w",stdout);
    cin>>a>>b;
    for(int i=max(a,b);i<=a*b;i++)
    {
        if(i%a==0 and i%b==0)
        {
            cout<<i;
            return 0;
        }
    }
}

