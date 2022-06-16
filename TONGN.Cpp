#include<bits/stdc++.h>
using namespace std;
long long n,s=0;
long long tong(long long n)
{
   if(n==0)
   {
       return 0;
   }
   else
   {
    return n+tong(n-1);
   }
}
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TONGN.INP     ","r",stdin);
freopen("TONGN.OUT  ","w ",stdout);
    cin>>n;
    cout<<tong(n);
}
