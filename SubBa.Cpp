#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.size(),s=0,x=0,dem=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        for(int t=i;t<=j;t++)
             if(a[t]=='a')
               s++;
             else
                 x++;
             if(s==x)
                dem++;
             s=0;x=0;
    }
    cout<<dem;
}
