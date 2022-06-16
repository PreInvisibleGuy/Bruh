#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>z;
    if(z==1)
    {
        cout<<"No";
        return 0;
    }
    for(int x=1;x<z;x++)
    {
        cout<<x<<' '<<z-x<<endl;
    }
}
