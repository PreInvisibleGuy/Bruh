#include<bits/stdc++.h>
using namespace std;
long long n,a[500006],s,max1=-1e10,d;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MaxLT.Inp ","r",stdin);
freopen("MaxLT.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i]<0)d++;
    if(d==n)
    {
        for(int i=1;i<=n;i++)
                if(a[i]>max1)
                  max1=a[i];
    }
    else
    {
        for(int i=1;i<=n;i++)
    {
        s=s+a[i];
        if(s<0) s=0;
        if(s>max1) max1=s;
    }
    }
    cout<<max1;
}
