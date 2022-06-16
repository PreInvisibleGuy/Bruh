#include<bits/stdc++.h>
using namespace std;
int a[200002],s=1,ans=0,n,x,y,f[200002];
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SubArrC.Inp   ","r",stdin);
freopen("SubArrC.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    f[1]=1;
    for(int j=2;j<=n;j++)
        f[j]=1+(a[j-1]<=a[j])*f[j-1];
    int len=*max_element(f+1,f+1+n);
    cout<<len<<endl;
    for(int j=1;j<=n;j++)
    {
       if(f[j]==len)
       {
           int i=j-len+1;
           cout<<i<<' '<<j;
           break;
       }
    }


}
