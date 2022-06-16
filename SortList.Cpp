#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    pair<int, int> a[100];
    freopen("SortList.Inp   ","r",stdin);
    freopen("SortList.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i].first>>a[i].second;
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {
        if(a[i].first==a[i+1].first)
        {
            if(a[i].second>a[i+1].second)
                swap(a[i].second,a[i+1].second);

        }
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }

}
