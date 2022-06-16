#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.size();
    if(a[0]==a[n-1])
         cout<<"equal";
    else
        cout<<"unequal";
}
