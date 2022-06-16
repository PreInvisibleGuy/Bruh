#include<bits/stdc++.h>
using namespace std;
long long a[1000001],n,s=0,x=0,y=0;
int main()
{
    freopen("TongChan.Inp ","r",stdin);
    freopen("TongChan.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
       cin>>a[i];
    for(int i=1;i<=n;i++)
        s=s+a[i];
    for(int i=1;i<=n;i++)
    {
     if(a[i]%2==0)
     {
         x++;
              }
    else
        y++;
    }
    if(s%2==0)
    {
        cout<<(x*(x-1)/2)+(y*(y-1)/2);
    }
    else
        cout<<x*y;

}
