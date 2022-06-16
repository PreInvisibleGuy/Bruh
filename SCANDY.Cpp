#include <bits/stdc++.h>
using namespace std;
pair< int, string> d[101];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
        cin>>d[i].first>>d[i].second;
        }
    sort(d+1,d+n+1);
    for(int i=1;i<=n;i++)
        cout<<d[i].first<<" "<<d[i].second<<'\n';
}
