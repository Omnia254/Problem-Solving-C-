#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int flag=0;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.length()+b.length();i++)
    {
        if(a[i]<b[i])
        {
            cout<<a;
            flag =0;
            break;
        }
        else if(a[i]>b[i])
        {
            cout<<b;
            flag =0;
            break;
        }
        else
        {
            flag =-1;
        }
    }
    if(flag == -1)
    {
        if(a.length()>b.length())
        {
            cout<<b<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
    return 0;
}
