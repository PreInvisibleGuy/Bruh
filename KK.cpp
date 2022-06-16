#include<bits/stdc++.h>
using namespace std;
long long  n,s=1,a[1000001],t;
int solve(int n)
{
    for(int i=1;i<=n;i++)
        a[i]=i;
    int x=0,i;
    int m=n;
    while(m>0)
    {
        x=x+m/5;
        m=m/5;
    }
    m=x;
    i=1;
    while(m>0)
    {
        if(a[i]%2==0){a[i]=a[i]/2;m--;}
        else i++;
    }
    m=x,i=1;
    while(m>0)
    {
        if(a[i]%5==0)
        {
            a[i]=a[i]/5;m--;
        }
        else
            i++;
    }
    m=1;
    for(int i=1;i<=n;i++)
    {
        m=m*a[i];
        m=m%10;
    }
    cout<<m<<endl;
    return m;
}
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    //freopen("KK.INP  ","r",stdin);
   // freopen("KK.Out ","w ",stdout);
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        solve(n);
    }
}


