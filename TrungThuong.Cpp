#include<bits/stdc++.h>
using namespace std;
int n, a[200002], Next3[200002], Next1[200002];
long long   s2[200002], s3[200002];
void sub1_2()
{
    int x, y, ans = 0;
    for(int i = 1; i < n; i++)
    {
        x = y = a[i];
        for(int j = i+1; j <= n; j++)
        {
            x = min(x, a[j]); y = max(y, a[j]);
            if(x == min(a[i], a[j]) and y == max(a[i], a[j]) )
                ans++;
        }
    }
    cout<<ans<<endl;
}
long long getequal(int e)
{
    long long x = 0, s = 0;
    for(int i = 1; i <= n+1; i++)
        if(a[i] == e) x++;
        else { s += x*(x-1)/2; x = 0;}
    return s;
}
void init(){
    memset(s2, 0, sizeof s2);
    memset(s3, 0, sizeof s3);
    memset(Next1, 0, sizeof Next1);
    memset(Next3, 0, sizeof Next3);
    for(int i = 1; i <= n; i++){
        s2[i] = s2[i-1] + (a[i] == 2);
        s3[i] = s3[i-1] + (a[i] == 3);
    }
    Next1[n+1] = Next3[n+1] = n+1;
    for(int i = n; i >= 1; i--){
        Next1[i] = Next1[i+1];
        Next3[i] = Next3[i+1];
        if(a[i] == 1) Next1[i] = i;
        if(a[i] == 3) Next3[i] = i;
    }
}
void sub3()
{
    long long ans = 0;
    a[n+1] = 10;
    for(int i = 1; i <= 3; i++)  ans += getequal(i);
    init();
    for(int i = 1; i < n; i++)
    {
        if(a[i] == 1) {
                ans += (s2[Next3[i] - 1] - s2[i]);
                ans += (s3[n] - s3[i]);
        }
        if(a[i] == 2) ans += (s3[Next1[i] - 1] - s3[i]);
    }
    reverse(a+1, a+1+n);
    init();
    for(int i = 1; i < n; i++)
    {
        if(a[i] == 1) {
                ans += (s2[Next3[i] - 1] - s2[i]);
                ans += (s3[n] - s3[i]);
        }
        if(a[i] == 2) ans += (s3[Next1[i] - 1] - s3[i]);
    }
    cout<<ans<<endl;
}
int main()
{
    freopen("TrungThuong.Out","w", stdout);
    freopen("TrungThuong.Inp","r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i = 1; i <= n; i++)  cin>>a[i];
    if(n <= 2000)
        sub1_2();
    else
        sub3();
}
