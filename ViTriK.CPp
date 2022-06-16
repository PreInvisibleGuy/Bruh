#include<bits/stdc++.h>
using namespace std;
string a[1000001];
int main()
{
    int k;
    cin>>k;
    a[1]='1';
   for(int i=1;i<=1000000;i++)
   {
       a[i]=a[i]+'1';
   }
   cout<<a[k];

}
