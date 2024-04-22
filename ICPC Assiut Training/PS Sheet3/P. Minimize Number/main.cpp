#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
   {
        cin >> arr[i];

    }
    int result =0;
    for(int i = 0; i < n; i++)
    {
        int counter=0;
       if(arr[i]==1)
       {
           cout<<0<<endl;
           return 0;
       }
       while(arr[i]%2==0)
       {
           arr[i] /=2;
           counter++;
       }
       if(i == 0 || counter<result)
       {
           result=counter;
       }
    }
    cout<<result;
    return 0;
}
