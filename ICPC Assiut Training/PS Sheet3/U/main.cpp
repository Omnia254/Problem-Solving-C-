#include <iostream>
#include <vector>

using namespace std;
bool is_subsequence(int N, int M, const vector<int>& A, const vector<int>& B) {
    int i = 0, j = 0;

    while (i < N && j < M) {
        if (A[i] == B[j]) {
            j++;
        }
        i++;
    }

    return j == M;
}
int main()
{
    int N,M,x;
    cin>>N>>M;
    vector<int> A(N), B(M);
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<M;i++)
    {
        cin>>B[i];
    }
    // Output
    bool result = is_subsequence(N, M, A, B);
    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
