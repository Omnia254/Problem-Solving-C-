#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e';
}

bool isConsonant(char ch) {
    return ch == 'b' || ch == 'c' || ch == 'd';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string word;
        cin >> word;

        string result;

        for (int i = 0; i < n; i++) {
            if (isConsonant(word[i])) {
                result += word[i];

                if (i + 1 < n && isVowel(word[i + 1])) {
                    result += '.';
                }
            } else if (isConsonant(word[i])) {
                result += word[i];

                if (i + 1 < n && isVowel(word[i + 1]) && (i + 2 == n || isConsonant(word[i + 2]))) {
                    result += '.';
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}



/*int main() {
    int t, no;
    cin >> t;
    no = t;

    while (t--) {
        char arr[3][3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[i][j] == '?') {
                    if ((arr[i][(j - 1 + 3) % 3] == 'A' && arr[i][(j + 1) % 3] == 'B') ||
                        (arr[i][(j - 1 + 3) % 3] == 'B' && arr[i][(j + 1) % 3] == 'A')) {
                        cout << "C" << endl;
                    } else if ((arr[(i - 1 + 3) % 3][j] == 'A' && arr[(i + 1) % 3][j] == 'B') ||
                               (arr[(i - 1 + 3) % 3][j] == 'B' && arr[(i + 1) % 3][j] == 'A')) {
                        cout << "C" << endl;
                    } else if ((arr[i][(j - 1 + 3) % 3] == 'A' && arr[i][(j + 1) % 3] == 'C') ||
                               (arr[i][(j - 1 + 3) % 3] == 'C' && arr[i][(j + 1) % 3] == 'A')) {
                        cout << "B" << endl;
                    } else if ((arr[(i - 1 + 3) % 3][j] == 'A' && arr[(i + 1) % 3][j] == 'C') ||
                               (arr[(i - 1 + 3) % 3][j] == 'C' && arr[(i + 1) % 3][j] == 'A')) {
                        cout << "B" << endl;
                    } else if ((arr[i][(j - 1 + 3) % 3] == 'B' && arr[i][(j + 1) % 3] == 'C') ||
                               (arr[i][(j - 1 + 3) % 3] == 'C' && arr[i][(j + 1) % 3] == 'B')) {
                        cout << "A" << endl;
                    } else if ((arr[(i - 1 + 3) % 3][j] == 'B' && arr[(i + 1) % 3][j] == 'C') ||
                               (arr[(i - 1 + 3) % 3][j] == 'C' && arr[(i + 1) % 3][j] == 'B')) {
                        cout << "A" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
*/

/*int main()
{
    int a,b,c,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a == b)
        {
            cout<<c<<endl;
        }
        else if(b == c)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
    }
    return 0;
}*/
