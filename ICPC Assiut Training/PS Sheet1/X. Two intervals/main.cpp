#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,l,r;
    cin>>a>>b>>c>>d;
    if(c>b || d<a)
    {
         cout << "-1" << endl;
    }
    else
    {
       l = max(a, c);
       r= min(b, d);
       cout<<l<<" " <<r ;
    }
    return 0;
}
