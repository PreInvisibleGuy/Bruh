#include <bits/stdc++.h>
#define N 100001

using namespace std;
int n,kq,f[N];
long long a[N];

int main()
{
  //  freopen("anhhoa.inp","r",stdin);
   // freopen("anhhoa.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    f[1]=1; f[2]=2;
    for(int i=3;i<=n;i++)
    {
        if(a[i]==a[i-1] && a[i]==a[i-2]) f[i]=2;
        else f[i]=f[i-1]+1;
    }
    kq=*max_element(f+1,f+n+1);
    cout<<kq;

    return 0;
}
