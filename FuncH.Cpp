#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,x,n,i=1;
    cin>>x>>n;
   s=2*x+1;
   while(n--)
   {
       s=2*(s+i)+1;
       i++;
   }
   cout<<s;
}
