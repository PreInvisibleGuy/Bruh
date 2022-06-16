#include<bits/stdc++.h>
using namespace std;
int n, a[100001];
const int mx = 1e9;
void taoso() {
    long long u, v, e;
    u = 1;
    while(1) {
        if (u > mx) break;
        v = 1*u;
        while(1) {
            if (v > mx) break;
            e = 1*v;
            while (1) {
                if (e > mx) break;
                n++;
                a[n] = e;
                e = e * 5;
            }
            v = v * 3;
        }
        u = u * 2;
    }
    sort(a + 1, a + 1+ n);
}
void taoso1() {
    long long u = 1, v = 1, e = 1;
    for(int i = 0; i <= 33; i++) {
        if (i > 0) u *= 2;
        if (u > mx) break;
        for (int j = 0; j <= 30; j++) {
            if (j > 0) v *= 3;
            if (u * v > mx) break;
            for(int k = 0; k <= 30; k++) {
                if (k > 0) k *= 5;
                if (u*v*k > mx) break;
                n++;
                a[n] = u * e * v;
            }
        }
    }
    sort(a + 1, a + 1 + n);
}
int Find(int x) {
    int L = 1, R = n, mid;
    while (L <= R)
    {
        mid = (L + R) / 2;
        if (a[mid] == x) return mid;
        if (a[mid] < x) L = mid + 1;
        else R = mid - 1;
    }
    return -1;
}
int main() {
       ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Hamming.INP","r",stdin);
    freopen("Hamming.OUT","w",stdout);
    taoso();
    int x, t;
    cin>>t;
    while(t--) {
        cin>>x;
        cout<<Find(x)<<'\n';
    }
}
