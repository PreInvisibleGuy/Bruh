#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TSO.INP  ","r",stdin);
freopen("TSO.OUT","w ",stdout);
    cin>>a;
    int n=a.size(),s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>='0' and a[i]<='9')
               s=s+(a[i]-'0');
    }
    cout<<s;
}
