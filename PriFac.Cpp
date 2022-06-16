#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,dem;
    freopen("PriFac.Inp ","r",stdin);
    freopen("PriFac.Out","w",stdout);
    cin >> n;
    long long a=2;
    while(a*a<=n)
    {
        if(n%a==0)
        {
            cout<<a<<"*";
            n=n/a;

        }
        else
            a++;
    }
    if(n>1)
        cout<<n;

}
