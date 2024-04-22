#include <iostream>

using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        int arr[N];
        for(int i = 0; i<N; i++)
        {
            cin>>arr[i];
        }
        long long  minSum = 1e9;
        for(int i = 0;i<N;i++)
        {
            for(int j = i+1;j<N;j++)
            {
                long long currentMinSum =0;
                currentMinSum=arr[i]+arr[j]+(j+1)-(i+1);
               if(currentMinSum<minSum)
                minSum = currentMinSum;
               currentMinSum=0;
            }
        }
        cout << minSum << endl;
    }

    return 0;
}
