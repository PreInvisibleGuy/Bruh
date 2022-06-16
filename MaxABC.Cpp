#include<bits/stdc++.h>
using namespace std;
string x;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MaxABC.Inp    ","r",stdin);
freopen("MaxABC.Out ","w ",stdout);
    cin>>x;
    int n=x.size();
    x=" "+x;
    int a[n+1],b[n+1],c[n+1];
    a[0]=b[0]=c[0]=0;
    for(int i=1;i<=n;i++)
    {
        a[i]=a[i-1]+(x[i]=='a');
        b[i]=b[i-1]+(x[i]=='b');
        c[i]=c[i-1]+(x[i]=='c');
    }
    int q,i,j,xa,xb,xc;
    cin>>q;
    while(q--)
    {
        cin>>i>>j;
        xa=a[j]-a[i-1];
        xb=b[j]-b[i-1];
        xc=c[j]-c[i-1];
        cout<<max({xa,xb,xc})<<'\n';
    }
}
