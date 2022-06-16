#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nmax 100007
using namespace std;
int n, a[nmax], b[nmax], c[nmax], ans;
int main(){
    faster
    freopen("THREENUM.INP", "r", stdin);
    freopen("THREENUM.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        b[i] = max(a[i], b[i-1]);
    }
    c[n-1] = a[n-1];
    for(int i = n - 2; i >= 0; i--){
        c[i] = max(c[i+1], a[i]);
    }
    for(int i = 1; i < n-1; i++){
        ans = max(ans, 2*b[i-1]-3*a[i]+5*c[i+1]);
    }
    cout << ans;
    return 0;
}
