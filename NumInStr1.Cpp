#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long long x=0;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1')
            x=x+1;
        if(a[i]=='2')
            x=x+2;
        if(a[i]=='3')
            x=x+3;
        if(a[i]=='4')
            x=x+4;
        if(a[i]=='5')
            x=x+5;
        if(a[i]=='6')
            x=x+6;
        if(a[i]=='7')
            x=x+7;
        if(a[i]=='8')
            x=x+8;
         if(a[i]=='9')
             x=x+9;
    }
    cout<<x;
}
