#include<bits/stdc++.h>
using namespace std;
string x,y;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("STR.Inp","r",stdin);
     freopen("STR.Out","w",stdout);
    cin>>x;
    cin>>y;
    int m=y.size(),dem=0;
    for(int i=0;i<=m-3;i++)
    {
       string t=y.substr(i,3);
       if(t==x)
          dem++;
    }
    cout<<dem;
}
