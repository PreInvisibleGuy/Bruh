#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, x, s;
    freopen("Thap.Inp", "r", stdin);
    freopen("Thap.Out", "w", stdout);
    cin>>t;
    while(t--) {
        cin>>n;
        s = 0;
        for(int i = 1; i <= n; i++) {
            cin>>x;
            s += x;
        }
        if (s % n == 0) cout<<0<<'\n';
        else cout<<1<<'\n';
    }
}
