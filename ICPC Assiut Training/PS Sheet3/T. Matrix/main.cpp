#include <iostream>

using namespace std;

int main()
{
    int N,M,c1=0,c2=0;
    cin>>N;
    int arr[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==j)
            {
                 c1 = c1+(arr[i][j]);
            }
            if((i+j)==(N-1))
            {
                 c2 = c2+(arr[i][j]);
            }
        }
    }
    cout << abs(c1-c2) << endl;
    return 0;
}



