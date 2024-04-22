#include <iostream>
#include <cmath>
using namespace std;

int convert(string binary) {
    int dec = 0, i = 0;
    while (!binary.empty()) {
        int bit = binary.back() - '0';
        binary.pop_back();
        dec += bit * pow(2, i);
        ++i;
    }

    return dec;
}

int main() {
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string binary = "";
        cin >> x;

        while (x >= 1) {
            int rem = x % 2;
            x = x / 2;

            if (rem == 1) {
                binary = '1' + binary;
            }
        }

        cout <<convert(binary) <<endl;
    }

    return 0;
}
