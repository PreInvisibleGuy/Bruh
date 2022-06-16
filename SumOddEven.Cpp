#include<bits/stdc++.h>
using namespace std;
int a[100001],n,s=0;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("SumOddEven.Inp   ", "r", stdin);
   freopen("SumOddEven.Out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=n;i>=1;i--)
        for(int j=i-1;j>=1;j--)
    {
        if(a[i]%2==0 and a[j]%2!=0)
        {
            s=a[i]+a[j];
            cout<<s;
            return 0;
        }
        if(a[i]%2!=0 and a[j]%2==0)
            {
                s=a[i]+a[j];
                cout<<s;
            return 0;
            }
    }
}
