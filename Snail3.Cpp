#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,h;
    freopen("Snail3.Inp ","r",stdin);
    freopen("Snail3.Out","w",stdout);
    cin>>x>>y>>h;
    long long e=0,n=0;
    long long s=0;
    while(s+x<h)
    {
        s=s+x-y;
        e=e+x+y;
        n++;
    }
    cout<<n+1<<endl;
    e=e+h-s;
    cout<<e;


}
