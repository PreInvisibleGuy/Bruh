#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
      freopen("Divisible.Inp","r",stdin);
    freopen("Divisible.Out","w",stdout);
    cin>>n;
    if(n%2==0)
    {
        cout<<n;
        return 0;
    }
    cout<<n*2;
}

