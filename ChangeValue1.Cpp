#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s;
    for(int i=1;i<=3;i++)
    {
        cin>>a>>b;
    if(a==b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
       s=abs(a-b);
    if(s==2)
         cout<<"YES"<<endl;
    else
      cout<<"No"<<endl;
    }

    }
}

