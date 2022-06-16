#include<bits/stdc++.h>
using namespace std;
string s1,s2,a,x;
int main()
{

    cin>>s1;
    cin>>s2;
    int n=s1.size();
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        a="";
    for(int t=i;t<=j;t++)
    {
        a=a+s1[t];
    }
    if(ktra(a))
    {
      if(ans<j-i+1)
      {

      }
    }
    }
}
