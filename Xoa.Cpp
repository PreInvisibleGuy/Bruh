#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Xoa.Inp    ","r",stdin);
freopen("Xoa.Out ","w ",stdout);
    cin>>n;
    int a[n+1],f[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        int e=0;
        for(int j=1;j<i;j++)
            if(a[j]<=a[i])
              e=max(e,f[j]);
    f[i]=1+e;

    }
    int len=*max_element(f+1,f+1+n);
    cout<<n-len;
}
