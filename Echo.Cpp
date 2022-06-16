#include<bits/stdc++.h>
using namespace std;
int check(string x)
{
    int n=x.size();
    if(n%2==1)
        return 0;
   string t=x.substr(0,n/2-1);
   string v=x.substr(n/2,n-1);
   if(t==v)
    return 1;
  return 1;
}
int main()
{
    string x,y;
    cin>>x>>y;
    if(check(x))
            cout<<"Echo"<<endl;
         else
            cout<<"No echo"<<endl;
    if(check(y))
            cout<<"Echo"<<endl;
         else
            cout<<"No echo"<<endl;

}
