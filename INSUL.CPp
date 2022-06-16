#include<bits/stdc++.h>
using namespace std;
long long n,a[100001];
int  res = 0;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("INSUL.INP", "r", stdin);
    freopen("INSUL.OUT", "w", stdout);
    cin>>n;
    for (long i=1;i<=n;i++) {
       cin>>a[i];
        res += a[i];
    }
    sort(a+1,a+n+1);
    long tmp = 0;
    if (n % 2 == 0) {
        for (long i=1;i<=n/2;i++)
            tmp += a[i];
        res += (res - tmp) - tmp;
    }
    else {
        for (long i=1;i<=n/2;i++)
            tmp += a[i];
        long tmp2 = res - tmp - a[n/2+1];
        res += tmp2 - tmp;
    }
    cout<<res;
}
