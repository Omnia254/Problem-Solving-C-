#include <iostream>
#include <cmath>
using namespace std;

int fib(int n)
{
    if((n==1)||(n==0))
    {
      return(n);
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }

}
int fib2(int n)
{
    if((n==1)||(n==0))
    {
      return(n);
    }
    int a=0,b=1,c;
    for(int i=2;i<=n;++i)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main() {

    int n,i=0;
    cin>>n;
    while(i<n)
    {
        cout<< fib2(i)<<" ";
        i++;
    }
    return 0;
}
