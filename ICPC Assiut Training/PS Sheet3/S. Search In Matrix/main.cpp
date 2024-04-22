#include <iostream>

using namespace std;

int main()
{
    int N,M,x;
    cin>>N>>M;
    int arr[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>x;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(x == arr[i][j])
            {
                 cout << "will not take number" << endl;
                 return 0;
            }
        }
    }
    cout << "will take number" << endl;
    return 0;
}
