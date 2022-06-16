#include<bits/stdc++.h>
using namespace std;
string x,y;
int n,s;
int main()
{
    cin>>x;
    n=x.size();
  int i=0,j=n-1;
  while(i<=j)
  {
      if(x[i]!=x[j])
        s++;
   i++;j--;

  }
  cout<<s;


}

