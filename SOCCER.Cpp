#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[101];
    int n,s=0,x=0;
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SOCCER.inp   ","r",stdin);
freopen("SOCCER.out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
         cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]=="Vietnam")
            s++;
        else
            x++;
    }
    cout<<s<<' '<<x;

}
