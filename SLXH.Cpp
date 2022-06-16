#include<bits/stdc++.h>
using namespace std;
int x,a[101],n,s=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SLXH.INP  ","r",stdin);
freopen("SLXH.OUT ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>x;
   for(int i=1;i<=n;i++)
      if(a[i]==x)
         s++;
   cout<<s;

}
