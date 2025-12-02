    #include <iostream>
    using namespace std;

    int power(int base, int exponent) {
        if(exponent == 0) {
            return 1;
        } else {
            return base * power(base, exponent - 1);
        }
    }

    int main() {
        int base, exponent;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter exponent: ";
        cin >> exponent;

        int result = power(base, exponent);
        cout << base << " ^ " << exponent << " is " << result << endl;

        return 0;
    }
