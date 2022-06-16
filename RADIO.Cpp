#include<bits/stdc++.h>
using namespace std;
string a;
int n;
int main()
{
    cin>>n;
    cin>>a;
    n=a.size();
    for(int i=0;i<n;i++)
    {
        string s="";
       for(int j=0;j<=i;j++)
       {
        s=s+a[j];
       }
       if(a.find(s)>0)

    }



}
