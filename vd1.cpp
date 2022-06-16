#include<bits/stdc++.h>
using namespace std;
int main() {
    double a, b;
    cin>>a>>b;
    cout<<(int)a / (int)b<<'\n';
    int d = (int)a % int(b);
    cout<<d<<'\n';
    cout<<fixed<<setprecision(2)<<(a / b);
}
