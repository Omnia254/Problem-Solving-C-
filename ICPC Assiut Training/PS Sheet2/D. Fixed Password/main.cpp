#include <iostream>

using namespace std;

int main()
{
    int x;
    int i =0;
    do
    {
        cin>>x;
        if(x == 1999)
        {
            i=1;
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }while(i==0);

    return 0;
}
