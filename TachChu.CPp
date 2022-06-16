#include<bits/stdc++.h>
using namespace std;
long long n,i,m[1000001],k=0;
string s;
char c;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("TACHCHU.inp","r",stdin);
    freopen("TACHCHU.out","w",stdout);
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
        sort(s.begin(),s.end());
    n=s.length();
    for(i=0;i<n;i++)
    m[s[i]]++;
    for(i=0;i<n;i++)
    if(m[s[i]]==1)
    {
       cout<<char(s[i]-32)<<endl;
    }
}
