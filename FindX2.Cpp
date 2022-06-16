#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[10],x;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("FindX2.Inp ","r",stdin);
   freopen("FindX2.Out","w ",stdout);
    cin>>a[1]>>a[2]>>a[3];
    cin>>a[4];
    sort(a+1,a+1+4);
    x=a[2];
    cout<<abs(x-a[1])+abs(x-a[3])+abs(x-a[2])+abs(x-a[4]);

}
