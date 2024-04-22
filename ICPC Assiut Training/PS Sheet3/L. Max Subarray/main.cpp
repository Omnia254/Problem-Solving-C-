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
        for(int l =0;l<N;l++)
        {
            for(int r = l;r<N;r++)
            {
                int mx=-1e5;
                for(int i = l;i<=r;i++)
                {
                    if(arr[i]>mx)
                        mx=arr[i];
                }
                cout<<mx<<" ";
            }
        }
        cout<<endl;

    }
}
