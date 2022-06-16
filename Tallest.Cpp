#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],b[100];
     freopen("Tallest.Inp  ","r",stdin);
    freopen("Tallest.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        b[i]=a[i];
    sort(b+1,b+1+n);
    for(int i=1;i<=n;i++)
    {
        if(a[i]==b[n])
            cout<<i<<" ";
    }
}
