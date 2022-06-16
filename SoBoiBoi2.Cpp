#include<bits/stdc++.h>
using namespace std;
long long a,b,x,dem=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 //  freopen("SoBoiBoi2.Inp","r",stdin);
 //  freopen("SoBoiBoi2.Out","w",stdout);
    cin>>a>>b;
    if(a%b!=0)
    {
        cout<<0;
        return 0;
    }
    x=1;
    while(b*x<=a)
    {
        if(a%(b*x)==0)
            dem++;
        x++;
    }
    cout<<dem;
}
