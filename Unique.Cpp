#include<bits/stdc++.h>
using namespace std;
void solve(int x)
{
    if(x>45)
    {
        cout<<-1<<endl;return;
    }
    int a[11],n=0,mx=10;
    while(x>0)
    {
        if(x<mx)
        {
        n++;a[n]=x;x=0;
        }
        else
        {
            n++;mx--;a[n]=mx;x=x-mx;
        }
    }
    for(int i=n;i>=1;i--)
         cout<<a[i];
        cout<<endl;

}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("Unique.Inp","r",stdin);
   freopen("Unique.Out","w",stdout);
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        solve(x);
    }
}
