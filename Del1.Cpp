#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n,a,b,c;
       freopen("Del1.Inp","r",stdin);
    freopen("Del1.Out","w",stdout);
    cin>>n;
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    int x=b*10+c;
    int s=a*10+c;
    int i=a*10+b;
    cout<<max({s,x,i});



}
