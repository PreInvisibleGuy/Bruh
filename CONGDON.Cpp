#include<bits/stdc++.h>
#include <math.h>
using namespace std;
double a,b;
long long s=0;
int main()
{
      cin>>a>>b;
       a=round(a);
       b=round(b);
       for(int i=a;i<=b;i++)
           s=s+i*i;
       cout<<s%(1000000007);
}
