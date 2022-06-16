#include<bits/stdc++.h>
using namespace std;
int n,pos[10000001],x,k;
int main()
{
       ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SORTBOOK.INP","r",stdin);
    freopen("SORTBOOK.OUT","w",stdout);
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>x;
      pos[x]=i;
  }
  k=1;
  int x=pos[n];
  for(int i=n-1;i>=1;i--)
  {
      if(pos[i]<pos[i+1])
        k++;
      else
        break;
  }
  x=n-k;
  cout<<n-k<<endl;
  for(int i=n-k;i>=1;i--)
  {
   cout<<i<<' ';
  }
}
