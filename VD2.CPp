#include <bits/stdc++.h>
using namespace std;
int main()
{
    double s=1,n=0,a=0.005;
    while (s>=a)
    {
         n=n+1;
        s=1/n;

    }
    cout<<n;
}
