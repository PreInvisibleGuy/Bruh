#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,a[10001],k,n,s,x;
       freopen("SplitK.Inp","r",stdin);
     freopen("SplitK.Out","w",stdout);
    cin>>m;
    for(int t=1;t<=m;t++)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        s=1;
        x=0;
        for(int i=2;i<=n;i++)
        {
            if(a[i]<a[i-1])
                s++;

        }
        if(s<=k)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

}
