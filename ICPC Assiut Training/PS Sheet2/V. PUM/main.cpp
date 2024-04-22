#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int counter =1;
    if(N>=1 && N<=20)
    {
        for(int i = 0 ; i<N ; i++)
        {
            if(counter % 4 == 0)
            {
                counter++;
                cout<<"PUM"<<endl;
                i--;
                continue;
            }

            cout<<counter<<" ";
            counter++;
            cout<<counter<<" ";
            counter++;
            cout<<counter<<" ";
            counter++;
        }
        cout<<"PUM"<<endl;
    }
    return 0;
}
