#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001],s;
    cin>>n;
    for(int i=1;i<=n;i++)
         cin>>a[i];
    for(int i=1;i<=n-2;i++)
    {
        s=a[i]+a[i+1]+a[i+2];
        cout<<s<<endl;
    }
}
