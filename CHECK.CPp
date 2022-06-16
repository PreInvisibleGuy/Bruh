#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a=0,b=0;
    cin>>n;
     while(n>99)
     {
     a=a+n%10;
     n=n/10;
     }
     while(n>0)
     {
         b=b+n%10;
         n=n/10;
     }
     if(a==b)
     {
         cout<<"YES";
         return 0;
     }
     else
        cout<<"NO";
}
