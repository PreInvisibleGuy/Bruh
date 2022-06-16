#include<bits/stdc++.h>
using namespace std;
long long n,s[200002],a[200002],du[100];
int main()
{
      freopen("Chiahet7.Inp ","r",stdin);
       freopen("Chiahet7.Out ","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
     for(int t=0;t<=6;t++)
        du[t]=0;
    du[0]=0;
    long long x=0,t,e;
    for(int i=1;i<=n;i++)
    {
        x=x+a[i];
        t=x%7;
        if(t!=0 and du[t]==0)
        {
            du[t]=i;
        }
    }
    e=x=0;
    for(long long j=1;j<=n;j++)
    {
        x=x+a[j];
        t=x%7;
        if(t==0) e=j;
        else
            if(du[t]!=0)
        {
            long long i=du[t];
            e=max(e,j-i);
        }
    }
    cout<<e;


}
