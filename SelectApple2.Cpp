#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001],b[100001],s,ans=0,x=0;
    freopen("SelectApple2.Inp ","r",stdin);
    freopen("SelectApple2.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    b[1]=1;
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        if(a[i]==a[i-1])
              b[i]=1+b[i-1];
        else
            b[i]=1;
    }
    s=b[1];
    for(int i=2;i<=n;i++)
       s=max(s,b[i]);
    cout<<s;
}
