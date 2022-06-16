#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Palindrome.INP ","r",stdin);
    freopen("Palindrome.OUT","w",stdout);
    string a;
    cin>>a;
    string x=a;
    reverse(a.begin(),a.end());
    if(x==a)
    {
        cout<<"Palindrome";
    }
    else
        cout<<"No";
}
