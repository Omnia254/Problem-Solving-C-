#include <iostream>

using namespace std;

int main()
{
    int a,b,c=-1;
    cin>>a>>b;
    for(int i =a;i<=b;i++)
    {
        int lucky = 0 , x=i;
        while(x)
        {
            if(x%10 !=4 && x%10 != 7)
            {
                lucky++;
            }
            x = x/10;
        }
        if(lucky == 0)
        {
            cout<<i<<" ";
            c++;
        }
    }
    if(c == -1)
        cout<<c;
    return 0;
}
