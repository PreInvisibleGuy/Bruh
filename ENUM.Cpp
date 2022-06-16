#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s1, s2, s3;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    freopen("ENUM.INP","r",stdin);
    freopen("ENUM.OUT","w",stdout);
    cin >> s1 >> s2 >> s3;
    for(int i = 0; i < s2.size(); ++i)
    {
        string x = s2.substr(i, 1);
        while(s1.find(x) != -1)
        {
            ll z = s1.find(x);
            s1.erase(z, 1);
        }
        while(s3.find(x) != -1)
        {
            ll z = s3.find(x);
            s3.erase(z, 1);
        }
    }
    if(s1.size() == 0)
        cout << "empty \n";
    else
        cout << s1 << "\n";
    if(s3.size() == 0)
        cout << "empty \n";
    else
        cout << s3 << "\n";
}

