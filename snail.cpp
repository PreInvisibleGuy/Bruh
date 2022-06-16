#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,h;
    freopen("snail.Inp ","r",stdin);
   freopen("snail.Out","w",stdout);
    cin>>x>>y>>h;
    long long n=0;
    long long s=0;
    while(s+x<h)
    {
        s=s+x-y;
        n++;
    }
    cout<<n+1<<endl;


}
