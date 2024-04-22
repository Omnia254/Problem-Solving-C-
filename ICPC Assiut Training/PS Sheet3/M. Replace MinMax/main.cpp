#include <iostream>
#include <climits> // Include this header for INT_MIN and INT_MAX

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minnum = INT_MAX;  // Corrected: Initialize minnum to INT_MAX
    int maxnum = INT_MIN;  // Corrected: Initialize maxnum to INT_MIN

    for(int i = 0; i < n; i++) {
        if (arr[i] > maxnum) {
            maxnum = arr[i];
        }

        if (arr[i] < minnum) {
            minnum = arr[i];
        }

    }
    for(int j=0;j<n;j++)
    {
        if (arr[j] == maxnum) {
            arr[j] = minnum;
        }

        else if (arr[j] == minnum) {
           arr[j] = maxnum;
        }

    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }
    return 0;
}
