#include<bits/stdc++.h>
using namespace std ;
const int mv = 1e6 + 1;
bool nt[mv];
int q, m, n, sum[mv], four[mv];
bool sang() {
    memset(nt, true, sizeof nt);
    nt[0] = nt[1] = false;
    for(int i = 2; i < sqrt(mv); i++)
    if (nt[i] == true) {
        int t = i;
        while(t*i < mv) {
            nt[t*i] = false;
            t++;
        }
    }
}

void getfour() {
    memset(four, 0, sizeof four);
    for(int i = 2; i < sqrt(mv); i++)
    if (nt[i] == true) {
        long long x = 1LL*i*i*i;
        if(x < mv) four[x] = 1;
        for(int j = i + 1; j*i < mv; j++)
            if(nt[j] == true)
                four[i*j] = 1;
    }
    sum[1] = 0;
    for(int i = 2; i < mv; i++)
        sum[i] = sum[i-1] + four[i];
}
int main()
{
    ios::sync_with_stdio(0) ;
    cin.tie(0) ;cout.tie(0);
    freopen("QF.INP" , "r" , stdin ) ;
    freopen("QF.OUT" , "w" , stdout) ;
 sang();
 getfour();
    cin>>q;
    while(q--)
    {
        cin>>n>>m;
        cout<<sum[m]-sum[n-1]<<'\n';
    }
}

