#include<bits/stdc++.h>
using namespace std;
long long n,a[10001],s=0;
int tong(int x)
{
    long long dem=0;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            if(x/i!=i)
                dem=dem+2;
            else
                dem++;
        }
    }
    return dem;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TuUoc.Inp    ","r",stdin);
freopen("TuUoc.out ","w ",stdout);
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
         int m=tong(a[i]);
         if(m==4)
            s++;
     }
     cout<<s;
}
