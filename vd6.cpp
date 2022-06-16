#include<bits/stdc++.h>
using namespace std;
int main()
{
   double n,s=0,x=1;
    cin>>n;
    for(long long i=1;i<=n;i++)
        {
            s=s+i;
            x=x*i;
        }
  cout<<setprecision(2)<<fixed<<x;



}

