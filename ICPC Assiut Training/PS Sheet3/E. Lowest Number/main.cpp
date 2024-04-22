#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];

    }
    int minNum = arr[0];
    int index=1;
    for(int j = 1; j<n;j++)
    {
        if(arr[j] < minNum)
        {
             index=(j+1);
             minNum = arr[j];
        }

    }
    cout<<minNum<<" "<<index;
    return 0;
}
