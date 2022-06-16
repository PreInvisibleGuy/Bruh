#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100001],b[100001],n,m,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>b[i];
    for(int i=1;i<=m;i++)
    {
      s=0;
        {
          for(int j=n;j>=b[i];j--)
               s=s+a[j];

     }
     cout<<s<<endl;
    }

}
