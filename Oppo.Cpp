#include<bits/stdc++.h>
using namespace std;
long long a,b,c,t;
void solve(int a,int b,int c)
{
    int n=2*abs(a-b);
    if(a>n or b>n or c>n)
    {
        cout<<-1<<'\n';
        return;
    }
    int x=n/2+c;
if(1<=x and x<=n)
{
 cout<<x<<'\n';return;
}
x=c-n/2;
cout<<x<<'\n';
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Oppo.Inp  ","r",stdin);
freopen("Oppo.Out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
         solve(a,b,c);
    }
}
