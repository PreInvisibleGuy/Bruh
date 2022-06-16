#include<iostream>
#include<math.h>
using namespace std;
int numberMax(int n) {
    n = abs(n);
    int max = 0;
    while (n > 0) {
        int temp = n % 10;
        n /= 10;
        if (temp > max)
            max = temp;
    }
    return max;
}
int main() {
    int n;
    cin >> n;
    cout <<numberMax(n) << endl;
    return 0;
}
