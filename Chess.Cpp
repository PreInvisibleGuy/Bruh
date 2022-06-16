#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("chess.Inp ","r",stdin);
freopen("chess.Out","w ",stdout);
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
             x=(n/6+1)*6+1;
          while(x>n)
          {
              x=x-2;
          }
          if(x==n)
          {
              cout<<1<<endl;
          }
          else
               cout<<0<<endl;
        }
    }
}
