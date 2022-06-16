#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001],k,s=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
     sort(a+1,a+1+n);
     for(int i=1;i<=k;i++)
        s=s+a[i];
    cout<<s;
}
