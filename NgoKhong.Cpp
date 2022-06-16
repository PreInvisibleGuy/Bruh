#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,s=0,a=1,m=1;
   freopen("NgoKhong.Inp","r",stdin);
   freopen("NgoKhong.Out","w",stdout);
    cin>>x;
    while(x>0)
    {
        x=x/2;
        s++;
    }
    for(int i=1;i<=s-1;i++)
    {
       m=m*2;
       a=a+m;
    }
    cout<<a;
}
