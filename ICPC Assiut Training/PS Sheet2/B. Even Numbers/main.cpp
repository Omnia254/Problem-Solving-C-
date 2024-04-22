#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    if(N>1 && N<=1000)
    {
    for(int i=2 ; i<=N ;)
    {
        if(i%2 ==0)
        {
            cout<<i<<endl;
        }
        i+=2;
    }
    }
     else
    {
        cout<<"-1"<<endl;
    }

    return 0;
}
