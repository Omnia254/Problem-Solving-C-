#include <iostream>
#include <vector>

using namespace std;

const int MAX_M = 100005;

void generateFrequencyArray(const vector<int>& A, vector<int>& frequencyArray, int M) {
    // Initialize the frequency array with zeros
    frequencyArray.assign(M + 1, 0);

    // Populate the frequency array
    for (int value : A) {
        if (value >= 1 && value <= M) {
            frequencyArray[value]++;
        }
    }
}

int main() {
    // Input
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Initialize the frequency array
    vector<int> frequencyArray(MAX_M);

    // Generate the frequency array
    generateFrequencyArray(A, frequencyArray, M);

    // Print the frequency of each number from 1 to M
    for (int i = 1; i <= M; ++i) {
        cout << frequencyArray[i] << endl;
    }

    return 0;
}
