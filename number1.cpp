#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001];
int main()
{
 cin>>n;
   for(int i=1;i<=n;i++)
      cin>>a[i];
 sort(a+1,a+1+n);
    for(int i=1;i<=n/2;i++)
    cout<<a[i]<<" ";
  reverse(a+1,a+1+n);
    for(int i=1;i<=n/2;i++)
    cout<<a[i]<<" ";
}
