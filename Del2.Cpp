#include<bits/stdc++.h>
using namespace std;
long long a[6];
int getnum(long long i,long long j)
{
    int s=0;
    for(int t=1;t<=5;t++)
    {
        if(t!=i and t!=j)
        {
            s=s*10+a[t];
        }
    }
    return s;
}
int main()
{
    long long m,n,i=5;
    freopen("Del2.Inp ","r",stdin);
    freopen("Del2.Out","w",stdout);
    cin>>n;
    m=n;
    while(m>0)
    {
        a[i]=m%10;
        m=m/10;
        i--;
    }
    long long ans=0,x;
    for(int i=1;i<=4;i++)
    {
        for(int j=i+1;j<=5;j++)
            {
                x=getnum(i,j);
           ans=max(ans,x);
            }
    }
    cout<<ans;


}
