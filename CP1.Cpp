#include<bits/stdc++.h>
using namespace std;
int q;
long long n,x,y;
int main()
{
   ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CP1.Inp ","r",stdin);
    freopen("CP1.Out","w",stdout);
   cin>>q;
   for(int i=1;i<=q;i++)
   {
       cin>>n;
       y=sqrt(n);
     cout<<y*y<<endl;
   }
 }
