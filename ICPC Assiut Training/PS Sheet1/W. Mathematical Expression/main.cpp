#include <iostream>

using namespace std;

int main()
{
    int a,b,c,r;
    char o,s;
    cin>>a>>o>>b>>s>>c;
    if(o == '+')
    {
        r=a+b;
        if(c == r)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<r;
        }
    }
    else if(o == '-')
    {
        r=a-b;
        if(c == r)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<r;
        }
    }
    else if(o == '*')
    {
       r=a*b;
        if(c == r)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<r;
        }
    }
    else
    {
        r=a/b;
        if(c == r)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<r;
        }
    }

    return 0;
}
