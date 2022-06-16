#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001],n,m,t;
int fi()
{
    int i,j,ans=abs(a[1]-b[1]);
    i=1,j=1;
    while(i<=n and j<=m)
    {
         ans=min(ans,abs(a[i]-b[j]));
         if(a[i]==b[j])
    {
       return 0;
    }
         if(a[i]<b[j])
            i++;
         else
            j++;
    }
   return ans;
}
int main()
{
          ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     freopen("DiffMin.Inp  ","r",stdin);
    freopen("DiffMin.Out","w",stdout);
    cin>>t;
    while(t--)
    {
      cin>>n;
       for(int i=1;i<=n;i++)
        cin>>a[i];
     cin>>m;
       for(int i=1;i<=m;i++)
        cin>>b[i];
        cout<<fi()<<'\n';
    }

}
