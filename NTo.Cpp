#include<bits/stdc++.h>
using namespace std;
int kiemtra(long long n)
{
    long long i=1;
    while(i*i<=n)
    {

    }

}
int main()
{
    long long n;
    freopen("NTo.Inp ","r",stdin);
    freopen("NTo.Out","w",stdout);
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
