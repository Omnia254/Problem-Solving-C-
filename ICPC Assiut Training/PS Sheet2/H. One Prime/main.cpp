#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int X;
    cin >> X;

    if (isPrime(X)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

