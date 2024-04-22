#include <iostream>

using namespace std;

int gcd(int a,int b)
{
    int r = min(a,b);
    while(r > 0)
    {
        if(a % r == 0 && b % r == 0)
        {
            break;
        }
        r--;
    }
    return r;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout << gcd(a,b)<< endl;
    return 0;
}
