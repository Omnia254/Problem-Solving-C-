#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long size,range;
    cin>>size>>range;
    long long arr1[size];
    long long arr2[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr1[i];
        if(i == 0)
        {
            arr2[i] = arr1[i];
        }
        else
        {
            arr2[i] = arr1[i] + arr2[i-1];
        }
    }
    while(range--)
    {
        long long start,end;
        cin>>start>>end;
        start--;
        end--;
        long long sum = arr2[end] - arr2[start] + arr1[start];
        cout<<sum<<endl;
    }
}
/*#include <iostream>

using namespace std;

int main()
{
    int n,q,l,r;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        while(r--)
        {

        }
    }

    cout << "Hello world!" << endl;
    return 0;
}
*/
