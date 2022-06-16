#include<bits/stdc++.h>
using namespace std;
int tong(long long n)
{
 long long s=0;
 for(int i=1;i*i<=n;i++)
 {
     if(n%i==0)
     {
         s=s+i;
         if(n/i!=i)
             s=s+n/i;
     }
 }
 return s;
}
int main()
{
    long long a[101],n;
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SumDivi.Inp    ","r",stdin);
freopen("SumDivi.Out  ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cout<<tong(a[i])<<'\n';
    }
}
