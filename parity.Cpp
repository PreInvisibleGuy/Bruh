#include<bits/stdc++.h>
using namespace std;
int a[1001];
long long n,t,s,dem=0,i=1;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("parity.Inp","r",stdin);
//freopen("parity.Out","w ",stdout);
    cin>>t;
    while(t--)
    {
        dem=0,i=1;
        cin>>n;
      while(n>0)
      {
          int x=n%2;
          a[i]=x;
          i++;
          n=n/2;
      }
      for(int j=1;j<=i;j++)
      {
          if(a[i]==1)
             dem++;
      }
     if(dem%2==0)
        cout<<"even"<<'\n';
     else
        cout<<"odd"<<'\n';

    }
}
