#include <iostream>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int s=0;
    for(char c:a)
    {
        s += c - '0';
    }
    cout<<s;
    return 0;
}
