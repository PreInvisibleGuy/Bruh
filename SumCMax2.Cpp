#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001],k,q;
       // freopen("SumCMax2.Inp","r",stdin);
    //freopen("SumCMax2.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>q;
    for(int j=1;j<=q;j++)
    {
        cin>>k;
        long long e=a[k],s=a[k];
    for(int i=k-1;i>0;i--)
        {
            s=s+a[i];
            if(s>e)
                e=s;
        }
    cout<<e<<endl;
    }


}
