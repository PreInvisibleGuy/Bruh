#include <bits/stdc++.h>
using namespace std;
int main()
{
    double s, n, a=0.005;
    n=1;
    s=1;
    while (s>=a)
    {
        s=1/n;
        n=n+1;
    }
    cout<<n;

    return 0;
}
