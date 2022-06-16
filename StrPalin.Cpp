#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,s=0,dem=0;
    string a,b;
    while(t<=3)
    {
        cin>>a;
        int n=a.size();
       for(int i=n-1;i>=0;i--)
            b[i]=a[n-i-1];
    for(int i=0;i<n;i++)
        if(b[i]==a[i])
        s++;
    if(s==n)
        dem++;
    s=0;
    t++;
    }
    cout<<dem;
}
