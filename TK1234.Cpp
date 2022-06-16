#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100001],x=1,n;
       freopen("TK1234.Inp","r",stdin);
    freopen("TK1234.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        if(a[i]==a[i+1])
        {
            x=x+1;
        }
        else
        {
            cout<<x<<endl;
            x=1;
        }
    }

}
