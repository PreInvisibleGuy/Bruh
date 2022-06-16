#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],s=0,d[1000001],x=0;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("ChonSo.Inp  ","r",stdin);
freopen("ChonSo.Out","w ",stdout);
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>a[i];
     d[a[i]]++;
 }
 sort(d+1,d+1+1000000);
 for(int i=1000000;i>=0;i--)
 {
     if(d[i]!=0)
     {
         s=s+d[i];
         x++;
       if(x==2)
       {
           cout<<s;
           return 0;
       }
     }

 }
}
