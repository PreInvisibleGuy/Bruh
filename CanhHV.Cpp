#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
int main()
{
    cin>>a>>b>>c>>d;
    if(a<=0)
    {
        cout<<"No";
        return 0;
    }
    if(a==b and b==c and c==d)
    {
      cout<<"Yes";
    }
    else
        cout<<"No";

}
