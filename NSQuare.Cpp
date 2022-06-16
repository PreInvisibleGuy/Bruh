#include<bits/stdc++.h>
const int mv=1e9+7;
using namespace std;
long long n,s=0,x=0,t=0;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Nsquare.Inp   ","r",stdin);
freopen("Nsquare.Out ","w ",stdout);
   cin>>n;
   for(long long e=1;e<=sqrt(n);e++)
   {
       s=s+1+(n/e-e)/2;
   }
   cout<<s%mv;
}
