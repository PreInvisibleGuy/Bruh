#include <bits/stdc++.h>
using namespace std;
long long a,b,c,s,dem=0;
int main()
{
    freopen ("BAI5.inp","r",stdin);
    freopen ("BAI5.out","w",stdout);
    cin>>a>>b>>c;
    while (a<b)
    {
         if ((a+2)%c==0)  a=a+1;
         else  a=a+2;
         dem++;
    }
    cout<<dem;
}
