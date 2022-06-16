#include<bits/stdc++.h>
using namespace std;
int n, k, cnt;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SOMU.INP", "r", stdin);
    freopen("SOMU.OUT", "w", stdout);
    int q; cin>>q;
    while(q--)
    {
        cnt = 0;
        cin>>n>>k;
        long long t = k;
        while(t <= n)
        {
            cnt += n / t;
            t *= k;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
