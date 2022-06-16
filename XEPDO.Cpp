#include <bits/stdc++.h>
using namespace std;
long long n,m,A[1001],S;
int main()
{
ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("XepDo.Inp","r",stdin);
   freopen("XepDo.Out","w",stdout);
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        cin>>A[i];
    S=0;
    for (int i=1;i<=n;i++)
        if (A[i]<=m)
            S=max(S,A[i]);
    for (int i=1;i<n;i++)
        for (int j=i+1;j<=n;j++)
            if (A[i]+A[j]<=m)
            {
                if (A[i]+A[j]>S)
                    S=A[i]+A[j];
            }
    cout<<S;
}
