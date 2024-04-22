#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    long long s=0;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n ;i++)
    {
        cin>>arr[i];
        s += arr[i];
    }
 cout<<abs(s);
    return 0;
}
