#include<bits/stdc++.h>
using namespace std;
int a[200002],s=1,ans=0,n,x,y;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SubArrC.Inp   ","r",stdin);
freopen("SubArrC.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
     x=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]>=a[i-1])
             s++;
        else
        {
             if(s>ans)
             {
                 ans=s;
                 x=i-s;
                 y=i-1;
                 s=1;
             }
        }
    }
    cout<<s<<endl;
    cout<<x<<' '<<y;
}
