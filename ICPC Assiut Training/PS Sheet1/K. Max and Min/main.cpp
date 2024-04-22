#include<iostream>

using namespace std;

int main()

{  int x,y,z;cin>>x>>y>>z;
   if((x<y && x<z && y>x && y>z)|| (x==y && y==z)|| (y==z &&y>x) || (x==z && x<y))
    cout<<x<<" "<<y;
   else if((x<y && x<z && z>x && z>y)||(x==y && z>x))
    cout<<x<<" "<<z;
   else if((y<x && y<z && x>y && x>z)||(x==z && x>y) || (y==z && x>y))
    cout<<y<<" "<<x;
   else if(y<x && y<z && z>y &&z>x)
    cout<<y<<" "<<z;
   else if(z<x && z<y && x>y && x>z)
    cout<<z<<" "<<x;
   else if((z<x && z<y && y>x && y>z) || (x==y && x>z))
    cout<<z<<" "<<y;


}
