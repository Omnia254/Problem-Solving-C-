#include <iostream>

using namespace std;

int main()
{
    int x,m=0;
    int n,i=0;
    cin>>n;
    while(i<n)
    {
        cin>>x;
        if(m<x)
        {
            m=x;
        }
        i++;
    }
        cout << m << endl;
    return 0;
}
