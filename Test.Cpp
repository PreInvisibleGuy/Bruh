#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long A[100][100],n,S=0;
    cin>>n;
    for (long long i=1;i<=n;i++)
        for (long long j=1;j<=n;j++)
            cin>>A[i][j];
    for (long long i=1;i<=n;i++)
    {
        S+=A[i][i];
    }
    cout<<S;
}
