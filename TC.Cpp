#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    long long x=0;
    freopen("TC.Inp ","r",stdin);
    freopen("TC.Out","w",stdout);
    cin>>m>>n;
    for(int i=m;i<=n;i++)
        if(i%2==0)
        x=x+i;
    cout<<x;
}
