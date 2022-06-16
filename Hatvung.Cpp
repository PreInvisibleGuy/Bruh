#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[4],x;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("Hatvung.Inp    ","r",stdin);
freopen("Hatvung.out ","w ",stdout);
       cin>>a[1]>>a[2]>>a[3];
       sort(a+1,a+1+3);
       if((a[1]+a[3])/2<=a[2])
        {
          cout<<(a[1]+a[3])/2;
          return 0;
        }
        if((a[1]+a[3])/2>a[2])
            cout<<(a[1]+a[2]+a[3])/3;

}
