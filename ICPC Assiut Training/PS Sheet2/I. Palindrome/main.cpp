#include <iostream>
#include <algorithm>
#include <string>
/*using namespace std;
bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}
int main()
{
    int N;
    cin >> N;
    string strN = to_string(N);

    reverse(strN.begin(), strN.end());
    strN.erase(0, min(strN.find_first_not_of('0'), strN.size() - 1));

    cout << strN << endl;

    if (isPalindrome(strN)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;
     cin >> num;
     n = num;
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << rev << endl;

     if (n == rev)
         cout << "YES" << endl;
     else
         cout << "NO" << endl;

    return 0;
}
