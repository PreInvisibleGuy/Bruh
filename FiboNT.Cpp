#include<bits/stdc++.h>
using namespace std;

int fibonacci(long long n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 or n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int isPrimeNumber(long long  n) {
    if (n < 2) {
        return 0;
    }
   for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 long long  n,s,fi,x=0;
int main() {

ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 //  freopen("FiboNT.INP","r",stdin);
 // freopen("FiboNT.Out","w",stdout);
    cin >> n;
    long long i = 2;
    while (fibonacci(i) < n) {
             fi = fibonacci(i);
        if (fi<n and isPrimeNumber(fi)) {
           cout<<fi<<" ";
        }
        i++;
    }
}
