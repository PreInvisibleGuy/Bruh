#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001],s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
     for(int i=1;i<=n;i++)
     {
         if(a[i]%2==0)
         {
             s=s+2*a[i];
         }
         else
            s=s+3*a[i];
     }
     cout<<s;
}
