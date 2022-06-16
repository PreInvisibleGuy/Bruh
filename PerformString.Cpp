#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("PerformString.Inp  ","r",stdin);
freopen("PerformString.Out ","w ",stdout);
    cin>>a;
    int n=a.size(),s=0,x=0;
     for(int i=0;i<n;i++)
     {
          if(a[i]=='a')
            s++;
          else
              x++;
     }
     cout<<min(s,x*2);
}
