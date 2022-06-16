#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[100001];
long long n,s;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].second>>a[i].first;
    }
    sort(a+1,a+1+n);

}
