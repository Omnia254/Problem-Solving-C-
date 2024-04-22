#include <iostream>

using namespace std;

int main()
{
    int lines;
    cin>>lines;
    int spaces = lines-1;
    for(int i =1;i<=lines;i++)
    {
        for(int j =1 ;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int z =1 ;z<i*2;z++)
        {
            cout<<"*";
        }
        spaces--;
        cout<<endl;
    }
    return 0;
}
