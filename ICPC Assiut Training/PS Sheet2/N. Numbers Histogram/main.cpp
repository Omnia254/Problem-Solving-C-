#include <iostream>

using namespace std;

int main()
{
    char s;
    int num;
    cin>>s;
    cin>>num;
    int x[num];
    for(int i =0; i<num;i++)
    {
        cin>>x[i];
    }
    for(int z=0;z<num;z++)
    {
        for(int y=0;y<x[z];y++)
        {
            cout<<s;
        }
        cout<<endl;
    }
    return 0;
}
