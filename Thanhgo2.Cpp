#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,m,a[1001];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
         cin>>a[i];
    for(int i=1;i<=n;i++)
        s=s+(a[i]/m);
    cout<<s;
}

