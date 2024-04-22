#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;
    if(x>=0 && x<65)
    {
        cout << "IS DIGIT" << endl;
    }
    else if(x>=65 && x<97)
    {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    else if(x>=97 && x<=122)
    {
        cout << "ALPHA\nIS SMALL" << endl;
    }
    else if ((x>0 && x<=47)||(x>=58 && x<=64)||
               (x>=91 && x<=96)||(x>=123 && x<=127))
		cout<<"Character is a special symbol";
    return 0;
}
