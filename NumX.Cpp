#include<bits/stdc++.h>
using namespace std;
long long n,a[200003],x;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("NumX.Inp  ","r",stdin);
   freopen("NumX.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=2*n;i++)
        cin>>a[i];
    sort(a+1,a+1+2*n);
   cout<<a[n+1]-a[n]+1;





}

