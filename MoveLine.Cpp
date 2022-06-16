#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MoveLine.Inp   ","r",stdin);
freopen("MoveLine.Out ","w ",stdout);
    int n,s=0;
    string a;
    cin>>n;
    cin>>a;
    n=a.size();
    for(int i=0;i<n;i++)
        if(a[i]=='R')
           s++;
        else
             s--;
        cout<<s;
}
