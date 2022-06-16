#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100001],k;
    }
        cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>k;
    long long e=a[k],s=a[k];
    for(int i=k-1;i>0;i--)
        {
            s=s+a[i];
            if(s>e)
                e=s;
        }
      cout<<e;


}
