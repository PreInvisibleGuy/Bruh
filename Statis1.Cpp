#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1001],dem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=2;i<=n;i++)
        if(a[i]!=a[i-1])
        dem++;
    cout<<dem+1;
}
