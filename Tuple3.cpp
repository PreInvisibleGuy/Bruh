#include<bits/stdc++.h>
using namespace std;
long long n,a[200002],s=0,x;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Tuple3.Inp ","r",stdin);
   freopen("Tuple3.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
          cin>>a[i];
    sort(a+1,a+1+n);
    int k=1;
    for(int i=1;i<=n-2;i++)
    {
        while(k+1<=n and a[k+1]-a[i]<=2)
        {
            k++;
        }
           x=k-i;
           s=s+x*(x-1)/2;

    }
    cout<<s;
}
