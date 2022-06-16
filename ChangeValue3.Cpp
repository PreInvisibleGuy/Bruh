#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    for(int i=1;i<=3;i++)
    {
   cin>>a>>b;
    long long s=abs(a-b);
    if(s%2==0 and s<=6)
    {
        cout<<"Yes"<<endl;
    }
    else
     cout<<"No"<<endl;
    }


    }
