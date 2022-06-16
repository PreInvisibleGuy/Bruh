#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
    int ans=0,s=0;
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("NumInStr.Inp ","r",stdin);
freopen("NumInStr.Out ","w ",stdout);
    cin>>a;
    for(int i=0;i<=a.size();i++)
    {
       if(a[i]>='0' and a[i]<='9')
       {
           s=s*10+(a[i]-'0');
       }
       else
       {
          ans=ans+s;
          s=0;
       }
    }
    cout<<ans;
}
