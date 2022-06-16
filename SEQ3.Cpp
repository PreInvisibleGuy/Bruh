#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],Min=0,kq=0;
int main()
{
    cin>>n;
   cin>>a[1];
    Min=min(a[1],Min);
    for(int i=2;i<=n;i++)
     {
       cin>>a[i];
       a[i]+=a[i-1];
       Min=min(Min,a[i]);
       kq=max(kq,a[i]-Min);
       }
       cout<<kq;
            }

