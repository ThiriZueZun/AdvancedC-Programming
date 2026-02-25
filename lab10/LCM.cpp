#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    long long result;
    cin >> result;

    for (int i = 1; i < n; i++) {
        long long x;
        cin >> x;
        result = lcm(result, x);
    }

    cout << "LCM = " << result << endl;

    return 0;
}