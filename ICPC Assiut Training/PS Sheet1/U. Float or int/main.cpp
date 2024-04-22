#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double N;
    cin>>N;
    int x=ceil(N);
    if(x==N)
    {
        cout << "int "<<x<< endl;
    }
    else
    {
        int y = N;
        cout << "float "<<y<<" "<<N-y << endl;
    }
    return 0;
}

