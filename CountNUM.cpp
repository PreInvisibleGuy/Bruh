#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int chuso(int n) {
    int temp;
    do {
        temp = n % 10;
        n /= 10;
    } while (n > 0);
    return temp;
}
int main()
{
    long long k,s,a,b;
    cin>>k;
    if(k<10)
    {
        for(int i=1;i<=50;i++)
            {
                s=k*i;
              a=s%10;
              b=(s-a)/10;
              if(a>b and s>10)
                  cout<<s<<endl;
            }
          return 0;
    }


}
