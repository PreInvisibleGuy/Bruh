#include<bits/stdc++.h>
using namespace std;
int t,n,a[101],s,x[101],ans=0;
void xuly()
{
   int e=0;
   for(int i=1;i<=n;i++)
    e=e+x[i]*a[i];
   if(e==s)
     ans=1;
}
void Try(int i,int e)
{
    if(ans==1)
        return;
    for(int t=0;t<=e/a[i];t++)
    {
        x[i]=t;
        if(i==n)
            xuly();
        else
         Try(i+1,e-t*a[i]);

    }
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("ExpSum.Inp  ", "r", stdin);
   freopen("ExpSum.Out", "w", stdout);
   cin>>t;
   while(t--)
   {
       cin>>n>>s;
       for(int i=1;i<=n;i++)
          cin>>a[i];
        sort(a+1,a+1+n);
       ans=0;
       Try(1,s);
        cout<<ans<<endl;


   }
}
