#include<bits/stdc++.h>
using namespace std;
int n;
double s;
int main()
{

          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("ContiFrac.Inp     ","r",stdin);
freopen("ContiFrac.Out ","w ",stdout);
    cin>>n;
    s=1+1/2.0;
    while(n>1)
    {
        s=(1+1/s)*1.0;
        n--;
    }
   cout<<setprecision(6)<<fixed<<s;;
}
