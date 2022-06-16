#include<bits/stdc++.h>
using namespace std;
unsigned long long n,k,a[100001],s=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Socot.Inp   ","r",stdin);
freopen("Socot.Out ","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=n;i>=1;i--)
    {

          while(a[i]>=a[i-1] and k>0)
          {
              s=s+a[i];
              a[i]--;
              k--;
          }

    }
    if(k==0)
    {
        cout<<s;
        return 0;
    }
}
