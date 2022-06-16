#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001];
    freopen("QueryMaxEven.Inp","r",stdin);
    freopen("QueryMaxEven.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    long long m=a[1];
    for(int i=1;i<=n;i++)
    {
        if(m<a[i] and a[i]%2==0)
        {
            m=a[i];
        }
        if(m%2==0)
        {
            cout<<m<<endl;
        }
        else
            cout<<"0"<<endl;
    }
}
