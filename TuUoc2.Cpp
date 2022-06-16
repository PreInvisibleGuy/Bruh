#include<bits/stdc++.h>
using namespace std;
const int mv = 2e7 + 1;
bool nt[mv];
bool four[mv];
void sang()
{
    memset(nt, true, sizeof nt);
    nt[0] = nt[1] = false;
    for(int i = 2; i <= sqrt(mv); i++)
        if (nt[i])
            for(int t = i; t * i <= mv; t++)
                nt[i*t] = false;
}

void getFour()
{
    memset(four, false, sizeof four);
    for(int i = 2; i <= sqrt(mv); i++)
        if(nt[i])
    {
        for(int t = i + 1; t*i < mv; t++)
            if(nt[t])
                four[i*t] = true;
        long long x = 1LL*i*i*i;
        if(x < mv)
            four[x] = true;
    }
}

int main()
{
    int L, R;
    freopen("TuUoc2.Inp", "r", stdin);
    freopen("TuUoc2.Out", "w", stdout);
    cin>>L>>R;
    sang();
    getFour();
    int ans = 0;
    for(int i = L; i <= R; i++)
        if(four[i])
            ans++;
    cout<<ans;
}
