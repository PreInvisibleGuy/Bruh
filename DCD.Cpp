#include<bits/stdc++.h>
using namespace std;
long long n,a[200002],x=0,s=0;
int main()
{ ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("DCD.Inp ","r",stdin);
   freopen("DCD.Out","w ",stdout);
    cin>>n;

    for(int i=1;i<=n;i++)
              cin>>a[i];
    sort(a+1,a+1+n);
    x=a[n/2+1];
   for(int i=1;i<=n;i++)
   {
       s=s+abs(a[i]-x);
   }
   cout<<s;
}
