#include<bits/stdc++.h>
using namespace std;
long long n,s=0,dem=0,dem2=0,dem3=0;
string a;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("STEP.INP ","r",stdin);
freopen("STEP.OUT","w ",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        long long s=0,em_ak=0;
        if(a.size()==1) s--;
        else
        for(int j=0;j<a.size()-1;j++)
        {
            if(a[j]<=a[j+1]) s++;
            em_ak++;
        }
        if(s==em_ak) dem3++;
    }
    cout<<dem3;
}
