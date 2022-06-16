#include <bits/stdc++.h>
#define nmax 1000000
using namespace std;
long long a[nmax+5],b[nmax+5],c[nmax+5];
int main()
{
    long long n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
   for(int i=1;i<=n;i++)
        cin>>b[i];
   for(int i=1;i<=n;i++)
        cin>>c[i];
   for(int i=1;i<=n;i++)
    {
        s+=(a[i]*5)+(b[i]*4)+(c[i]*3);
        cout<<s<<" ";
        s=0;
    }
}
