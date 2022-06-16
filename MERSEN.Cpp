#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
     freopen("MERSEN.inp","r",stdin);
   freopen("MERSEN.out","w",stdout);
    cin>>n;
   if(n<3)
   {
       cout<<" ";
   }
   if(3<=n and n<7)
    cout<<"3";
   if(7<=n and n<31)
    cout<<"3 7";
   if(31<=n and n<127)
    cout<<"3 7 31";
   if(127<=n and n<8191)
    cout<<"3 7 31 127";
   if(8191<=n and n<131071)
    cout<<"3 7 31 127 8191";
   if(131071<=n and n<524287)
    cout<<"3 7 31 127 8191 131071";
   if(524287<=n)
   {
       cout<<"3 7 31 127 8191 131071 524287";
   }
}
