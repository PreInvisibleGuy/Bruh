#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,b[100001],s=1,k;
int main()
{

    cin>>n>>k;
    for(int i=1;i<=n;i++)
          {
              cin>>a[i];
              a[i]=a[i]%k;
          }
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++)
    {
        if(a[i]!=a[i-1])
             s++;

    }
    cout<<s;

}
