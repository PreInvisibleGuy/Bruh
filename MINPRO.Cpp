#include<bits/stdc++.h>
using namespace std;
long long dua,dub,a,b1,a1,x,y,max1,max2,ans,n,t,nn,b;
void chay()
{
    dua = a1 - x ;
    dub = b1 - y ;
    nn = n ;
    a = a1 ;
    b = b1 ;
    a = a - min( dua , nn ) ;
    nn = nn - min( dua , nn ) ;
    b = b - min(dub, nn) ;
    max1 = a * b ;
    a = a1 ;
    b = b1 ;
    nn = n ;
    b = b - min( dub , nn ) ;
    nn = nn - min( dub , nn ) ;
    a = a - min(dua, nn) ;
    max2 = a * b ;
    ans = min( max1 , max2) ;
    cout << ans << '\n' ;
}
int main()
{
    ios::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;
    freopen( "MINPRO.INP" , "r" , stdin ) ;
    freopen( "MINPRO.OUT" , "w" , stdout ) ;
    cin >> t ;
    while(t--)
    {
         cin >> a1 >> b1 >> x >> y >> n ;
        chay();
    }


}


