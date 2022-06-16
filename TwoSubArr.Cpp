#include<bits/stdc++.h>
using namespace std;
 int n,a[1001],s=0,b[1000001],x,m=0;
int main()
{

 ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TwoSubArr.Inp  ","r",stdin);
freopen("TwoSubArr.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
         cin>>a[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
    {
            x=a[i]-a[j];
        m++;
        b[m]=x;

    }
   for(int i=1;i<=m;i++)
    b[m+i]=b[i]*(-1);
   sort(b+1,b+1+2*m);
   cout<<b[1]<<'\n';
   for(int i=2;i<=2*m;i++)
   {
       if(b[i]!=b[i-1])
          cout<<b[i]<<'\n';
   }
}

