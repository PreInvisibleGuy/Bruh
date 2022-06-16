#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n=3,a[4];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    cout<<a[n]+a[n-1];


}
