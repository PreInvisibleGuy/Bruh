#include<bits/stdc++.h>
using namespace std;
long long q,n;;
int main()
{
    freopen("CP2.Inp ","r",stdin);
    freopen("CP2.Out","w",stdout);
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>n;
        long long j=sqrt(n);
        while(j*j<n){
            j++;
        }
       cout<<j*j<<endl;
    }




}

