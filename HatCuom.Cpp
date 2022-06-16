#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,c=0,d=0;
  string a;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("HatCuom.Inp ","r",stdin);
freopen("HatCuom.Out","w ",stdout);
  cin>>n;
  cin>>a;
   n=a.size();
  for(int i=0;i<n;i++)
  {
      if(a[i]=='X')
          c++;
      else
         d++;
  }
  for(int i=1;i<=c;i++)
     cout<<'X';
  for(int i=1;i<=d;i++)
    cout<<'T';


}
