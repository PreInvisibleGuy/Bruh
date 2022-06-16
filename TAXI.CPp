#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],x2,x3,x4,x1,s=0;
int main()
{

     freopen("TAXI.Inp","r",stdin);
    freopen("TAXI.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            x1++;
        }
        if(a[i]==2)
            x2++;
        if(a[i]==3)
            x3++;
        if(a[i]==4)
            x4++;
    }
    s=x4;
    s=s+x2/2;
    x2=x2%2;
    if(x3>=x1)
    {
         s=s+x3;
         s=s+x2;
    }
    else
    {
    s=s+x3;
    x1=x1-x3;
   x1=x1+2*x2;
   s=s+x1/4;
   if(x1%4>0)
     s++;


    }
    cout<<s;





}

