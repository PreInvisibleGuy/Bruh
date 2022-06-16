#include<bits/stdc++.h>
using namespace std;
long long n,a[500005],s=0,dem,x=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("ReadBooks.Inp   ","r",stdin);
freopen("ReadBooks.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
   for(int i=1;i<=n;i++)
       s=s+a[i];
   x=s-a[n];
   if(x<a[n])
    x=a[n]*2;
   cout<<max(x,s);

}
