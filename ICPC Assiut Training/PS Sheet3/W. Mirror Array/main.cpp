#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Input
    int N, M;
    cin >> N >> M;

    // Input 2D array
    vector<vector<int>> arr(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the inverted array
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
