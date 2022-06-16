#include<bits/stdc++.h>
using namespace std;
int n,a[101],dem=0;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("nghichthe1.inp ","r",stdin);
freopen("nghichthe1.out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[j]>a[i])
                dem++;
        }
        cout<<dem<<' ';
        dem=0;
    }
}
