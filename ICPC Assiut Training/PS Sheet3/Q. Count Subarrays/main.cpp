#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sizeofarray,c=0;
        cin>>sizeofarray;
        int arr[sizeofarray];
        for(int i=0 ; i<sizeofarray ; i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<sizeofarray;i++)
        {
            for(int j=i+1;j<sizeofarray;j++)
            {
                if(arr[j]>arr[j-1])
                   c++;
                 else
                    break;
            }
        }
       cout<< c+sizeofarray<< endl;
    }

    return 0;
}
