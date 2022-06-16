#include<bits/stdc++.h>
using namespace std;
long long n,a[300004],q,b[300004],s=0,x=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
       cin>>a[i];
    cin>>q;
    for(int i=1;i<=q*2;i++)
        cin>>b[i];
    for(int i=1;i<=a[q*2];i=i+2)
    {
        s=0;
        for(int j=b[i];j<=b[i+1];j++)
            if(a[j]%2==0)
              {
                  s=s+1;

              }
       {
           cout<<s<<endl;
           x=x+1;
       }
       if(x==q)
       {
           return 0;
       }
    }




}
