#include<bits/stdc++.h>
using namespace std;
long long n,a[100001];
long long tong(long long a[100001],long long n)
{
    if(n==1)
    {
        return -a[1];
    }
    else
    {
        if(n%2==0)
            return a[n]+tong(a,n-1);
        else
            return -a[n]+tong(a,n-1);
    }
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Tongdd.Inp     ","r",stdin);
freopen("Tongdd.Out  ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<tong(a,n);
}
