#include <iostream>

using namespace std;
/*
"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
*/
int main()
{
    long long x,y;
    cin >>x>>y;

    cout << x<<" + " <<y <<" = "<<x+y<< endl;
    cout << x<<" * " <<y <<" = "<<x*y<< endl;
    cout << x<<" - " <<y <<" = " <<x-y<< endl;
    return 0;
}
