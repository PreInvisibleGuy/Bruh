#include<bits/stdc++.h>
using namespace std;
string a;
int s=0;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("WORM.Inp    ","r",stdin);
freopen("WORM.out ","w ",stdout);
    cin>>a;
    int n=a.size();
        for(int i=0;i<n;i++)
            if(a[i]>='1' and a[i]<='9')
                s++;
        cout<<s;
}
