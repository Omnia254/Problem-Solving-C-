#include <iostream>

using namespace std;
void replacement(int n,int arr[])
{
    for(int j = 0; j<n;j++)
    {
        if(arr[j] > 0)
        {
             arr[j] = 1 ;
        }
        else if (arr[j]<0)
        {
            arr[j]=2;
        }
        else
        {
            arr[j]=0;
        }

    }
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
    replacement(n,arr);
    for(int i = 0 ;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}
