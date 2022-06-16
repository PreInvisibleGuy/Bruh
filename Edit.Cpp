#include<bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    freopen("Edit.Inp", "r", stdin);
    freopen("Edit.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> a >> b;
    int step;
    int n = a.size();
    int m = b.size();
    int L[n + 1][m + 1];
    for (int i = 0; i <= n; i++) L[i][0] = i;
    for (int j = 0; j <= m; j++) L[0][j] = j;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) L[i][j] = L[i - 1][j - 1];
            else {
                L[i][j] = min({L[i - 1][j],L[i - 1][j - 1],L[i][j - 1]}) + 1;
            }
        }
    }
    cout << L[n][m];
}
