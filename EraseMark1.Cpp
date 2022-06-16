#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,a[100001],s=0;
    cin>>m;
    long long n=2*m;
    for(int i=1;i<=n;i++)
    {
            cin>>a[i];
    }
    for(int i=1;i<=m;i++)
    {
        if(a[i]==a[n-i+1])
        {
            s=s+a[i]*2;
        }
    }
    cout<<s;
}
