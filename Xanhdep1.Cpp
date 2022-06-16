#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int dem=0;
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("Xanhdep1.Inp ","r",stdin);
  freopen("Xanhdep1.Out","w",stdout);
    cin>>a;
    cin>>b;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]!=a[0])
            dem++;
    }
   cout<<dem;
}
