#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int minElement = INT_MAX;
    int minCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] < minElement) {
            minElement = arr[i];
            minCount = 1;
        } else if (arr[i] == minElement) {
            minCount++;
        }
    }

    if (minCount % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}
