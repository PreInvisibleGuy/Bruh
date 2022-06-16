#include<bits/stdc++.h>
using namespace std;
long long n,dem=0;
int main()
{
      ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CountDG.Inp ","r",stdin);
    freopen("CountDG.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x=i;
        while(x>0)
        {
        dem++;
        x=x/10;
        }
    }
    cout<<dem;
}
