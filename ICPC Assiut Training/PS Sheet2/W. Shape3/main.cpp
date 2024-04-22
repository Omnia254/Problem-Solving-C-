#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s = n-1;
    for(int i = 1 ;i<=n;i++)
    {
        for(int j = 1;j<=s;j++)
        {
            cout<<" ";
        }
        for(int z = 1;z<i*2;z++)
        {
            cout<<"*";
        }
        s--;
        cout<<endl;
    }
    int s2=1;
    for(int i = n ;i>=1;i--)
    {
        for(int j = 1;j<s2;j++)
        {
            cout<<" ";
        }
        for(int z = i*2;z>1;z--)
        {
            cout<<"*";
        }
        cout<<endl;
         s2++;

    }
    return 0;
}
