#include <iostream>

using namespace std;

int main()
{
    int K, S;
    cin >> K >> S;

    int count1 = 0;

    for (int X = 0; X <= K; ++X)
    {
        for (int Y = 0; Y <= K; ++Y)
        {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K)
            {
                count1++;
            }
        }
    }
    cout << count1 << endl;

    return 0;
}
