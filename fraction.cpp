#include <bits/stdc++.h>
using namespace std;
const int mmax = 1e6;
int a,m,b,n;
int d = 0;
int main()
{
    cin >> b >> n;
    for (int m = 1; m <= 2*n; m++)
    if (((1LL*2*b*m*n - 1LL*b*m*m) % (1LL*n*n) == 0) && (m!=n))
        d++;
    cout << d;
    return 0;
}
