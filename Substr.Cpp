#include<bits/stdc++.h>
using namespace std;
int main() {
    string s, t;
    cin>>s>>t;
    int n = t.size(), ans = 1e7;
    for(int i = 0; i <= s.size() - n; i++) {
        string x = s.substr(i, n);
        if (x == t) {
            cout<<0;
            return 0;
        }
        int o = 0;
        for(int i = 0; i < x.size(); i++) {
            if (x[i] != t[i]) o++;
        }
        ans = min(ans, o);
    }
    cout<<ans;
}
