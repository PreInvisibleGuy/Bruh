#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[101],n;
    cin>>n;
    for(int i=1;i<=n;i++)
          cin>>a[i];
    sort(a+1,a+1+n);
    cout<<a[1];

    }
