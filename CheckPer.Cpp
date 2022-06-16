#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[10001],t,s=0;
       freopen("SplitK.Inp","r",stdin);
     freopen("SplitK.Out","w",stdout);
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        s=0;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+1+n);
        for(int i=1;i<=n;i++)
        {
            if(a[i]==i)
                s++;
        }
        if(s==n)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
