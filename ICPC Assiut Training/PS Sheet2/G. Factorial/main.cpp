#include <iostream>

using namespace std;

int main()
{
    int x,n,long long result;
    do
    {
       cin>>n;
    }while(n>=1 && n>16);

    for(int i = 1; i<=n ; i++)
    {
        cin>>x;
        result=1;
        for(int j=1;j<=x;j++)
        {
            result *= j;
        }
        cout<<result<<endl;

    }


    return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{
    int m,n,i=0;
    long long r;
    do{
    cin>>m;
    }while(m<=1 && m>16);

    while(i<m)
    {
        cin>>n;
        r=1;
        for(int x = 1;x<=n;x++)
        {
            r*=x;
        }
        i++;
        cout<<r;
    }
    return 0;
}

*/
