#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TKChar.Inp","r",stdin);
freopen("TKChar.Out","w ",stdout);
    int a,b;
    string s;
    cin>>s;
    a=b=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' and s[i]<='z')
             a++;
        else
            b++;
    }
    cout<<a<<endl;
    cout<<b;
}
