#include <iostream>
using namespace std;

void printDigits(long long number) {
    if (number == 0) {
        cout << "0"<<endl;
        return;
    }
    while (number > 0) {
        cout << number % 10 << " ";
        number /= 10;
    }
    cout << endl;
}

int main() {
    long long T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        long long x;  // Change the type to long long
        cin >> x;
        printDigits(x);
    }

    return 0;
}

