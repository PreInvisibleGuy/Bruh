#include<bits/stdc++.h>
using namespace std;
long long n;
pair<int,int> a[400005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>a[i].first>>a[i].second;
            a[i].first=a[i].first+a[i].second;
        }
    sort(a+1,a+1+n);
    for(int i=n;i>=1;i--)
    {
        cout<<a[i].first-a[i].second<<' '<<a[i].second;
        cout<<' '<<a[i].first<<'\n';
    }
}
