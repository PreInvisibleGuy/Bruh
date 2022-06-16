#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("XHABC.INP  ","r",stdin);
freopen("XHABC.OUT","w ",stdout);
    string a;
    cin>>a;
    int n=a.size(),s=0;
    for(int i=2;i<n;i++)
    {
        if(a[i-2]=='a' and a[i-1]=='b' and a[i]=='c')
              s++;
    }
    cout<<s;
}
