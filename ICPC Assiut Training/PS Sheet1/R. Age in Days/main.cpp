#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int y=0,m=0,d=0;
    y = x/365;
    x= x%365;
    m= x/30;
    x=x%30;
    d=x;
    cout<<y <<" years"<<endl;
    cout<<m <<" months"<<endl;
    cout<<d <<" days"<<endl;
    return 0;
}
