#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 3, 3, 3, 5, 7,9,9};

    // int* lb = lower_bound(begin(arr), end(arr), 9);
    // int* ub = upper_bound(begin(arr), end(arr), 9);

    int* lb = lower_bound(arr, end(arr), 9);
    int* ub = upper_bound(arr, end(arr), 9);

    cout << "First 9 at index " << (lb - arr) << endl;
    cout << "Count of 9 = " << (ub - lb);

    return 0;
}
