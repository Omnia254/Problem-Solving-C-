
#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        char digit;
        cin >> digit;
        sum += digit - '0';
    }

    cout << sum << endl;

    return 0;
}
