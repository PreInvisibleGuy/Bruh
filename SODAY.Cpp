#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100001],s=0,k,L,R,ans=-1,Mid;
int main()
{
       ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("SODAY.INP   ","r",stdin);
freopen("SODAY.OUT ","w ",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int t=1;t<=m;t++)
    {
        cin>>k;
        ans=-1;
        L=1;
        R=n;
        while(L<=R)
        {
            Mid=(L+R)/2;
            if(a[Mid]==k)
            {
                ans=Mid;
                break;
            }
            if(a[Mid]>k)
                R=Mid-1;
            else
                L=Mid+1;

        }
        if(ans==-1)
        {
            cout<<0<<'\n';
        }
        else
            cout<<1<<'\n';

    }
}
