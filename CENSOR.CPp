#include<bits/stdc++.h>
#include<string>
using namespace std;
string s,t;
int main()
{
         ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("CENSOR.INP   ","r",stdin);
freopen("CENSOR.OUT ","w ",stdout);
    cin>>s;
    cin>>t;
    int n=s.size(),m=t.size();
    int x=s.find(t);
    while(x>=0)
    {
        s.erase(s.begin()+x,s.begin()+x+m);
        x=s.find(t);

    }
    cout<<s;
}
