#include <cmath>
#include<iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
  char arr[n1][n2];
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            cin>>arr[i][j];
        }
    }
    ////////////////////////////////////
    int x,y;
    cin>>x>>y;
    x=x-1;
    y=y-1;
    int counter=0,z=0;
    if(((y==n2-1)&&(x==n1-1)))
    {
        if(arr[x-1][y]=='x')
          {
           z++;
          }
       if(arr[x][y-1]=='x')
       {
             z++;
       }
         if(arr[x-1][y-1]=='x')
           {
               z++;
           }

    }
///////////////////////////////////////////////
    else if(((x==0)&&(y==0)))
    {
     if(arr[x+1][y]=='x')
          {
           z++;
          }
       if(arr[x][y+1]=='x')
       {
             z++;
       }
         if(arr[x+1][y+1]=='x')
           {
               z++;
           }

    }
///////////////////////////////////////////////
    else if(((x==0)&&(y==n2-1))){
        if(arr[x+1][y]=='x')
            z++;
        if(arr[x][y-1]=='x')
            z++;
            if(arr[x+1][y-1]=='x')
            z++;
    }
/////////////////////////////////////////////////
    else if(((x==n1-1)&&(y==0))){
        if(arr[x-1][y+1]=='x')
            z++;
        if(arr[x-1][y]=='x')
            z++;
            if(arr[x][y+1]=='x')
            z++;
    }
/////////////////////////////////////////////////////
    else
    {
        if(arr[x-1][y]=='x')
           {
                 counter++;
           }
         if(arr[x][y-1]=='x')
           {
                 counter++;
           }
         if(arr[x-1][y-1]=='x')
           {
                 counter++;
           }
         if(arr[x+1][y]=='x')
           {
                 counter++;
           }
         if(arr[x][y+1]=='x')
           {
                 counter++;
           }
         if(arr[x+1][y+1]=='x')
           {
                 counter++;
           }
         if(arr[x-1][y+1]=='x')
           {
                 counter++;
           }
         if(arr[x+1][y-1]=='x')
           {
                 counter++;
           }
    }
    if(z==3)
    cout<<"yes";
    else if(counter==8)
        cout<<"yes";
    else
        cout<<"no";

}
