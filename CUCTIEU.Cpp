#include<bits/stdc++.h>
using namespace std;
int b[33000],n,s=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CUCTIEU.INP  ","r",stdin);
freopen("CUCTIEU.OUT","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>b[i];
    if(b[1]<b[2])
        s++;
    if(b[n]<b[n-1])
        s++;
    for(int i=2;i<=n-1;i++)
    {
      if(b[i]<b[i-1] and b[i]<b[i+1])
         s++;
    }
    cout<<s;
}
