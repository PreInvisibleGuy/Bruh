#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("GD.Inp","r",stdin);
    freopen("GD.Out","w",stdout);
    int a,b,c,d,dem=0;
    cin>>a>>b;
    cin>>c>>d;
    for(int i=a;i<=b;i++)
    {
        if(i>=c and i<=d)
           dem++;
    }
    cout<<dem;
}
