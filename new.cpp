#include<bits/stdc++.h>
using namespace std;
int a[100001],q,n,s[100001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+a[i];
    cin>>q;
    while(q--)
    {
        int i,j;
        cin>>i>>j;
        cout<<s[j]-s[i-1]<<'\n';
    }

}
