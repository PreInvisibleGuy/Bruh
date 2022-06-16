#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,y,a,ans,q;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("RGC.Inp ","r",stdin);
    freopen("RGC.Out","w",stdout);
    cin>>q;
    while(q--)
    {
       cin>>a;
      for(long long i = sqrt(a);i >= 1;i--)
    {
        if(a % (i * i) == 0)
        {
            cout <<i<< " " <<a/(i * i)<< "\n";
            break;
        }
    }
    }

}
