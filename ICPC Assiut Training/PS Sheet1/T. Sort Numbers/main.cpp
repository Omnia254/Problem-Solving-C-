#include <iostream>

using namespace std;


int main()
{
    int x,y,z;
    cin>>x>>y>>z;
   if((x<y && x<z && y>x && y>z) ||(y==z &&y>x )||(x==y && z>x)||(x==z && x<y)||(x==y && y==z))
    {cout<<x<<"\n"<<z<<"\n"<<y<<"\n\n";}
   else if(x<y && x<z && z>x && z>y)
    {cout<<x<<"\n"<<y<<"\n"<<z<<"\n\n";}
   else if((y<x && y<z && x>y && x>z)||(x==z && x>y)||(y==z && x>y))
    {cout<<y<<"\n"<<z<<"\n"<<x<<"\n\n";}
   else if(y<x && y<z && z>y &&z>x)
    {cout<<y<<"\n"<<x<<"\n"<<z<<"\n\n";}
   else if(z<x && z<y && x>y && x>z)
    {cout<<z<<"\n"<<y<<"\n"<<x<<"\n\n";}
   else if((z<x && z<y && y>x && y>z)||(x==y && x>z))
    {cout<<z<<"\n"<<x<<"\n"<<y<<"\n\n";}
   cout<<x<<"\n"<<y<<"\n"<<z<<"\n\n";
    return 0;
}
