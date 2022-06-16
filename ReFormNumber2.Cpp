#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,k=0,n;
  freopen("ReFormNumber2.Inp ","r",stdin);
    freopen("ReFormNumber2.Out","w",stdout);
    cin>>a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(a%2==0)
            a=a+3;
        else
            a=a+5;
    }
    cout<<a;

}
