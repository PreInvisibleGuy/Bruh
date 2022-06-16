#include<bits/stdc++.h>
using namespace std;
int s3[200002],s1[200002],s2[200002],n,q;
int a[200002];
int main()
{
    freopen("TK123.Inp","r",stdin);
    freopen("TK123.Out","w",stdout);
      cin>>n>>q;
      for(int i=1;i<=n;i++)
         cin>>a[i];
    s1[0]=s2[0]=s3[0]=0;
    for(int i=1;i<=n;i++)
    {
     s1[i]=s1[i-1]+(a[i]==1);
      s2[i]=s2[i-1]+(a[i]==2);
      s3[i]=s3[i-1]+(a[i]==3);
    }
    int i,j,x,y,z;
    while(q--)
    {
        cin>>i>>j;
        x=s1[j]-s1[i-1];
        y=s2[j]-s2[i-1];
        z=s3[j]-s3[i-1];
        cout<<x<<" "<<y<<" "<<z<<'\n';

    }
}
