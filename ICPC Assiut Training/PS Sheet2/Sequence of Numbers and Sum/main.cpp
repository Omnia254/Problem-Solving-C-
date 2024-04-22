#include <iostream>

using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
int main()
{
    fast();
    while(true)
    {
        int N,M;
        cin>>N>>M;
        if(N<=0 || M <=0)break;
        int x=min(N,M);
        int t=max(N,M);
        int sum=0;
        for(int i=x;i<=t;i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    }
    return 0;
}
