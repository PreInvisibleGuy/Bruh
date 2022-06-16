#include<bits/stdc++.h>
using namespace std ;
long long n , a[1000005], ans , d[100005];
void tonguoc()
{

    for(int i = 1; i <= 100000 ; i ++)
        for(int j = i ; j <= 100000; j += i)
        d[j] ++ ;
}
int main()
{
    ios::sync_with_stdio(0) ;
    cin.tie(0) ;
    freopen("FOURNUM.INP" , "r" , stdin ) ;
    freopen("FOURNUM.OUT" , "w" , stdout) ;
    cin >> n ;
    for(int i = 1; i <= n; i ++)
        cin >> a[i] ;
    if(n <= 10000)
    for(int i =1 ; i <= n; i ++)
    {
        int cnt = 2;
        for(int j = 2; j <= sqrt(a[i]); j ++)
            if(a[i] % j == 0)
        {
            cnt ++ ;
            if(a[i] / j != j)
                cnt ++ ;
        }
        if(cnt == 4)
            ans ++ ;
    }
    else
    {
        tonguoc() ;
        for(int i = 1; i <= n; i ++)
            if(d[a[i]] == 4)
            ans ++ ;
    }
    cout << ans ;
}

