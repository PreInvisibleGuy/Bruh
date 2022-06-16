#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,x,y;
      freopen("RoEat.Inp ","r",stdin);
    freopen("RoEat.Out","w",stdout);
    cin>>n>>k;
    y=sqrt(2*(k+n));
    while(y>0)
    {
        if((y*(y+1)/2-n+y)==k)
        {
            cout<<n-y;
            return 0;
        }
        y--;

    }
}
