#include<bits/stdc++.h>
using namespace std;
int a[101],b[101],n,m;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
  freopen("Xepphong.Inp    ","r",stdin);
  freopen("Xepphong.Out ","w ",stdout);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>b[i];
    for(int i=1;i<=n;i++)
        a[i]=0;
    int r=0,s;
    for(int i=1;i<=m;i++)
    {
        while(b[i]>0)
        {
            r++;
            if(r>n)
                 r=1;
            while(a[r]==2)
                r++;
            s=2-a[r];
            if(b[i]==1)
                 s=1;
            a[r]=a[r]+s;
            b[i]=b[i]-s;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<endl;
}
