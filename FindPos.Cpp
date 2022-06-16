#include<bits/stdc++.h>
using namespace std;
int  a[200002],b[200002],Pos[200002],x;
int main()
{
    long long n;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("FindPos.Inp ","r",stdin);
    freopen("FindPos.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        x=a[i];
        Pos[x]=i;
    }
    for(int i=1;i<=n;i++)
        cin>>b[i];
    for(int i=1;i<=n;i++)
    {
        x=b[i];
        cout<<Pos[x]<<' ';
    }
   }

