#include <iostream>
#include <unordered_map>
using namespace std;

int vp(int p, int n) {
    int ans = 0;
    while (n) {
        n /= p;
        ans += n;
    }
    return ans;
}

int main() {
    int n, m;

    cout << "Enter n and m: ";
    cin >> n >> m;

    bool possible = true;

    if (m == 0) {
        possible = false;
    } else {
        unordered_map<int, int> factor_m;
        int temp = m;

        for (int i = 2; i * i <= temp; i++) {
            while (temp % i == 0) {
                factor_m[i]++;
                temp /= i;
            }
        }

        if (temp > 1)
            factor_m[temp]++;

        for (auto it : factor_m) {
            int p = it.first;
            int e = it.second;

            if (vp(p, n) < e) {
                possible = false;
                break;
            }
        }
    }

    if (possible)
        cout << m << " divides " << n << "!\n";
    else
        cout << m << " does not divide " << n << "!\n";

    return 0;
}