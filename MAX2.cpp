#include <bits/stdc++.h>
using namespace std;
long long n,a[10000000];
int main ()
{
freopen("MAX.inp","r",stdin);
    freopen("MAX.out","w",stdout);
    cin >> n;
    {
        for ( long long i = 1 ; i <= n ; i++ )
        cin >> a[i];
    }
    long long nn=-1e9;
        for ( long long i = 1 ; i <= n ; i++ )
        {
            long long dem = 0;
        for ( long long j = 1 ; j <= n ; j++ )
            {
            	if ( a[i] == a[j] ) dem++;
            	if ( nn < dem ) nn = dem;
            }
        }

    cout << nn;
}
