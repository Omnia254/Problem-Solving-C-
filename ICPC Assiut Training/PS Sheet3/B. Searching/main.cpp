#include <iostream>
#include <string.h>
using namespace std;
int searchAboutIndex(int n,int x,int arr[])
{
    for(int j = 0; j<n;j++)
    {
        if(arr[j] == x)
            return j;
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    int index = searchAboutIndex(n,x,arr);
    cout<<index;
    return 0;
}
