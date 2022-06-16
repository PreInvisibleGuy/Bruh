#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;
long long n,S=0,q1,w1;
char X[100][1000];
int main()
{
    freopen ("Xaubanbe.inp","r",stdin);
    freopen ("Xaubanbe.out","w",stdout);
    cin>>n;
    for (long long i=1;i<=n;i++)
        cin>>X[i];
    for (long long i=1;i<n;i++)
    {
        for (long long j=i+1;j<=n;j++)
        {
            bool ye=false;
            q1=strlen(X[i]);
            w1=strlen(X[j]);
            for (long long q=0;q<q1;q++)
            {
                for (long long w=0;w<w1;w++)
                {
                    if (X[i][q]==X[j][w])   ye=true;
                }
            }
            if (ye==true)  S++;
        }
    }
    cout<<S;
    return 0;
}
