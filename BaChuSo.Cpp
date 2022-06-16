#include<bits/stdc++.h>
using namespace std;
long long a,x,y,z,s;
int main()
{
    freopen("BaChuSo.inp","r",stdin);
   freopen("BaChuSo.out","w",stdout);
    cin>>a;
    x=a%10;
    a=a/10;
    y=a%10;
    a=a/10;
    z=a%10;
    s=111*(x+y+z);
    cout<<s;
}
