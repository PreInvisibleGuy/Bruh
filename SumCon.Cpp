#include<bits/stdc++.h>
using namespace std;
long long s,a[200002],m,n;
int main()
{
        ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("SumCon.Inp   ","r",stdin);
    freopen("SumCon.Out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int i,j,ans=0;
    i=j=1;
    s=a[1];
    while(j<=n)
    {
        if(s<=m)
        {
            ans=max(ans,j-i+1);
            j++;
            s+=a[j];
        }
        else
        {
            s-=a[i];
            i++;
        }
    }
    cout<<ans;
}
