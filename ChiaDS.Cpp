#include<bits/stdc++.h>
using namespace std;
int a[500005],mi[500005],ma[500005],n;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("ChiaDS.Inp","r",stdin);
   freopen("ChiaDS.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    mi[1]=a[1];
    for(int i=2;i<=n;i++)
        mi[i]=min(a[i],mi[i-1]);
    ma[n]=a[n];
    for(int i=n-1;i>=1;i--)
        ma[i]=max(a[i],ma[i+1]);
    int s=0;
    for(int i=1;i<n;i++)
    {
        if(mi[i]>ma[i+1])
        {
            s=i;break;
        }
    }
    if(s==0)
    {
        cout<<"No Index";
    }
    else
        cout<<s;
}

