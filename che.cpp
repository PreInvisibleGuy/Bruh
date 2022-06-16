#include<bits/stdc++.h>
using namespace std;
int n,xa,xb;
char a[100001];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("che.Inp   ","r",stdin);
//freopen("che.Out ","w ",stdout);
    cin>>n;
    xa=xb=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]=='A')
            xa++;
        if(a[i]=='B')
            xb++;
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]=='A')
            xa++;
        if(a[i]=='B')
            xb++;
    }
    if(xa>xb)
        cout<<'>';
    else
    {
        if(xa==xb)
            cout<<'=';
        else
            cout<<'<';
    }
}
