#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SubAB.Inp ", "r", stdin);
	freopen("SubAB.Out", "w", stdout);
    string a;
    cin>>a;
    int s=0,n=a.size();
    for(int i=0;i<n-1;i++)
    {
        if(a[i]=='A' and a[i+1]=='B')
            s++;
    }
    cout<<s;

}
