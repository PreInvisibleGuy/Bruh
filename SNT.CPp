#include<bits/stdc++.h>
using namespace std;
long long a,b,s=0;
int ktra(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i*i<=n;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
int main()
{
   cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(ktra(i))
            s++;
    }
    cout<<s;
}
