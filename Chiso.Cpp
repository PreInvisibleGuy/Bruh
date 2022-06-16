#include<bits/stdc++.h>
using namespace std;
long long n,m,k,a[100001],s[100001],q=0,x;
int solve(long long x)
{
    int L,R,Mid,ans;
     ans=-1;
        L=1;
        R=n;
        while(L<=R)
        {
            Mid=(L+R)/2;
            if(s[Mid]==x)
            {
                ans=Mid;
                break;
            }
            if(s[Mid]>x)
                R=Mid-1;
            else
                L=Mid+1;
        }
        return ans;

}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Chiso.inp   ","r",stdin);
freopen("Chiso.out ","w ",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    s[1]=a[1];
    for(int i=2;i<=n;i++)
        s[i]=s[i-1]+a[i];
    while(k--)
    {
       cin>>x;
       cout<<solve(x)<<'\n';
    }
}
