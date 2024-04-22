#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;
    if(x>=65 && x<97)
    {
        x+=32;
        cout<< x << endl;
    }
    else
    {
        x-=32;
        cout<< x <<endl;
    }

    return 0;
}

