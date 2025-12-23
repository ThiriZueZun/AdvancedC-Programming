#include <iostream>
#include <string>
using namespace std;

const int N = 10;   
const int DIGITS = 13; 

void countingSort(string arr[], int pos) {
    string output[N];
    int count[10] = {0};

    for (int i = 0; i < N; i++) {
        int digit = arr[i][pos] - '0';
        count[digit]++;
    }

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = N - 1; i >= 0; i--) {
        int digit = arr[i][pos] - '0';
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    for (int i = 0; i < N; i++)
        arr[i] = output[i];
}

void radixSort(string arr[]) {
    for (int pos = DIGITS - 1; pos >= 0; pos--) {
        countingSort(arr, pos);
    }
}

int main() {
    string id[N] = {
        "1101700234567",
        "3100501234561",
        "1101700234501",
        "2100309876543",
        "1101701234560",
        "5100204567891",
        "1101700234599",
        "4100801112223",
        "1101700234560",
        "1101700234000"
    };

    radixSort(id);

    cout << "เรียงเลขบัตรประชาชน (น้อย → มาก):\n";
    for (int i = 0; i < N; i++) {
        cout << id[i] << endl;
    }

    return 0;
}
