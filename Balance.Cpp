#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,s,dem=0;
    string a;
    cin>>n;
    while(n--)
    {
        s=0;x=0;
        cin>>a;
        int m=a.size();
        for(int i=0;i<m;i++)
            if(a[i]=='a')
             s++;
           else
             x++;
           if(s==x)
              dem++;
    }
    cout<<dem;

}
