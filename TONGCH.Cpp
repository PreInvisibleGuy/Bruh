#include<bits/stdc++.h>
using namespace std;
long long a[10001],n,ans=0,s,sum=0,bc,gcd;
int main()
{
    freopen("TongCH.Inp", "r", stdin);
    freopen("TongCH.Out", "w", stdout);
     cin>>n;
     for(int i=1;i<=n;i++)
        {cin>>a[i];sum=sum+a[i];}
     for(int l=1;l<=n;l++)
     {
         ans++;
         s=a[l];
         bc=a[l];
         for(int r=l+1;r<=n;r++)
         {
             s=s+a[r];
             gcd=__gcd(bc,a[r]);
             bc=(bc*a[r])/gcd;
             if(s%bc==0)
                ans++;
             if(bc>sum)
                break;
         }
     }
     cout<<ans;

}
