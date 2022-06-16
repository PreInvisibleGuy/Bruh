#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TDKT.INP  ","r",stdin);
freopen("TDKT.OUT","w ",stdout);
    cin>>a;
    int n=a.size(),s=0,x=0,z=0;
    sort(a.begin(),a.end());
for(int i=n-1;i>=0;i--)
    cout<<a[i];

}
