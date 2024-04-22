#include <iostream>

using namespace std;
int IsPardom(int n,int flag,int arr[])
{
     for(int  i =0 ;i<=n/2 && n!=0;i++)
     {
         if(arr[i] != arr[n-i-1])
         {
             flag = 1;
             return flag;
         }
     }
     return flag;
}
int main()
{
     int n;
     cin >> n;
     int arr[n];
     for(int i = 0 ;i < n;i++)
     {
         cin>>arr[i];
     }
     int flag = 0;
     flag = IsPardom(n,flag,arr);
     if (flag == 0)
         cout << "YES" << endl;
     else
         cout << "NO" << endl;

    return 0;
}
