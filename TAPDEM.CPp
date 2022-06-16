#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t,s=0;
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        cin>>a>>b;
       long long  x=a+b;
        while(x>0)
        {
            s++;
            x=x/10;
        }
        cout<<s<<endl;
        s=0;
    }
}
