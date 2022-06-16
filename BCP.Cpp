#include<bits/stdc++.h>
using namespace std;
long long a,b,c,bc;
int main()
{
    cin>>a>>b;
    bc=(a*b)/__gcd(a,b);
    c=bc;
    for(int i=2;i<=sqrt(bc);i++)
    {
        int dem=0;
        while(bc%i==0)
        {
            dem++;
            bc=bc/i;
        }
        if(dem%2==1)
        {
            c=c*i;
        }
    }
    if(bc>1)
        c=c*bc;
    cout<<c;
}
