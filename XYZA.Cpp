#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a;
    cin>>a;
    if(a<=2)
    {
        cout<<"No";
        return 0;
    }
    for(int x=1;x<=a;x++)
    {
        for(int j=1;j<=a;j++)
        {
            for(int i=1;i<=a;i++)
            {
                if(x+i+j==a)
                {
                    cout<<x<<' '<<j<<' '<<i<<'\n';
                }
            }
        }
    }
}
