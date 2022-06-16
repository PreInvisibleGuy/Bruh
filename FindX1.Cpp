#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[10],x;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("FindX1.Inp ","r",stdin);
   freopen("FindX1.Out","w ",stdout);
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1,a+1+3);
    x=a[2];
    cout<<abs(x-a[1])+abs(x-a[3])+abs(x-a[2]);

}
