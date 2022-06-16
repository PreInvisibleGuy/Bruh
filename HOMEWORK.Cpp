#include<bits/stdc++.h>
using namespace std ;
long long  n, a[100005], mi[100005] , s[100005],  k ;
long double ave , ans;
int main()
{
    ios::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;
    freopen("HOMEWORK.INP" , "r" , stdin ) ;
    freopen("HOMEWORK.OUT" , "w" , stdout) ;
    cin >> n ;
    for(int i =1 ; i <= n; i ++)
        cin >> a[i] ;
    for(int i = 1 ; i <= n; i ++)
        s[i] = s[i-1] + a[i] ;
    mi[n] = a[n] ;
    for(int i = n - 1; i >= 1 ; i --)
        mi[i] = min(a[i], mi[i+1]) ;
    for(int i = 1 ; i <= n - 2; i ++)
    {
        long double sum  = s[n] - s[i] ;
        sum -= mi[i] ;
        ave = 1.0*(sum/(n-i-1)) ;
        ans = max(ans, ave) ;
    }
    for(int i = 1 ; i <= n - 2; i ++)
    {
        long double sum  = s[n] - s[i] ;
        sum -= mi[i] ;
         ave = 1.0*(sum/(n-i-1)) ;
        if(ave == ans){
            cout << i <<  ' ' ;
    }}
}
