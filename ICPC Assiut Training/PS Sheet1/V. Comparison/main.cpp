#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char S;
    cin>>a>>S>>b;
    if((a > b&& S == '>')  || (a==b && S== '=') ||(a<b && S=='<') )
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;

    }

    return 0;
}
