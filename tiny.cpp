#include<bits/stdc++.h>
using namespace std;
long long a[100001],n,s=0;
int tong(int n)
{
     long long dem=0;
     for(int i=1;i<=n/2;i++)
       {
       if(n%i==0)
       {
           dem=dem+i;
       }
       }
     return dem;

}
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("tiny.Inp   ","r",stdin);
freopen("tiny.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(tong(a[i])>a[i])
            s++;
    }
    cout<<s;
}
