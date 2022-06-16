#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
      freopen("FourSeason.Inp","r",stdin);
    freopen("FourSeason.Out","w",stdout);
    cin>>a;
    if(a[0]=='S' and a[1]=='p')
    {
        cout<<"Summer";
        return 0;
    }
    if(a[0]=='S' and a[1]=='u')
    {
        cout<<"Autumn";
        return 0;
    }
    if(a[0]=='A')
    {
        cout<<"Winter";
        return 0;
    }
    if(a[0]=='W')
    {
        cout<<"Spring";
        return 0;
    }

}
