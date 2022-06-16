#include<bits/stdc++.h>
using namespace std;
int n,a[100001],ans=0,x=0,s=1;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("PositionC.Inp","r",stdin);
    freopen("PositionC.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    a[n+1]=-1;
    for(int i=1;i<=n+1;i++)
    {
        if(a[i]>0)
        {
            x++;
        }
        else
            {
                ans=max(ans,x);
                x=0;
            }
    }
    cout<<ans<<endl;

}
