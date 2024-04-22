/*
#include <iostream>

using namespace std;
int main()
{
}
*/
/*#include <iostream>
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
*/
#include <iostream>
int main()
{

while(true)
{
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6 : Continue " << std::endl;

    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    if (userOption == 0)
    {
        std::cout << "Invaild Input" << std::endl;
    }
    else if (userOption == 1)
    {
        std::cout << "Help - choose options from the menu" << std::endl;
        std::cout << "and follow the on screen instructions." << std::endl;
    }
    else if(userOption == 2)
    {
        std::cout << "Market look good" << std::endl;
    }
    else if (userOption == 3)
    {
        std::cout << "Market and offer Enter enter the amount" << std::endl;
    }
    else if (userOption == 4)
    {
        std::cout << "Make a bid Enter enter the amount" << std::endl;
    }
    else if (userOption == 5)
    {
        std::cout << "Your Wallet is empty" << std::endl;
    }
    else if (userOption == 6)
    {
        std::cout << "Going to next time frame" << std::endl;
    }
}
       return 0;
}
/*

int main() {

    int n,i=0;
    cin>>n;
    while(i<n)
    {
        cout<< fib(i)<<" ";
        i++;
    }
    return 0;
}


/*
#include <iostream>
//T. Shape2
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s = n-1;
    for(int i = 1 ; i<=n;i++)
    {
       for(int j = 1;j<=s;j--)
       {
           cout<<" ";
       }
       for(int x = 0;x<i*2;x++)
       {
           cout<<"*";
       }
       cout<<endl;
    }

}
*/
/*
#include <iostream>
//S. Sum of Consecutive Odd Numbers
using namespace std;
int main()
{
    int n,x,y,minnum,maxnum;
    long long s;
    cin>>n;
    for(int i = 0 ;i < n;i++)
    {
        cin>>x>>y;
        minnum=min(x,y);
        maxnum=max(x,y);
        s=0;
        for(int j = minnum+1;j<maxnum;j++)
        {
            if(j%2==1)
            {
                s+=j;
            }
        }
        cout<<s<<endl;
    }
}
*/
/*
#include <iostream>
//R. Sequence of Numbers and Sum
using namespace std;
int main()
{
    int n,m;
    do
    {

        cin>>n>>m;
       if(n>0 && m>0)
       {
            int minnum = min(n,m);
            int maxnum = max(n,m);
            int sum = 0 ;
            for(int i = minnum;i<=maxnum;i++)
            {
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
       }
       else
       {
           return 0;
       }
    }while(true);
}
*/
/*
#include <iostream>
//Q. Digits
using namespace std;
int main()
{
    int x,n;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cin>>x;
        while(x>0)
        {
            cout<<x%10<<" " ;
            x= x/10;
        }
        cout<<endl;
    }
}*/
/*#include <iostream>
//P.Shape1
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = n;i>0;i--)
    {
        for(int j = 0 ;j<i;j++)
            cout<<"*";
        cout<<endl;
    }
}*/

/*#include <iostream>
//O.Pyramid
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 0 ;j<i;j++)
            cout<<"*";
        cout<<endl;
    }
}*/
/*#include <iostream>

using namespace std;
//N. Numbers Histogram
int main()
{
    char s;
    int x,y;
    cin>>s>>x;
    for(int i = 0; i<x;i++)
    {
        cin>>y;
        for(int j=0;j<y;j++)
        {
            cout<<s;
        }
        cout<<"\n";
    }
}*/

/* gcd
#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    int r = min(a,b);
    while(r>0)
    {
        if(a%r==0 && b%r==0)
        {
            return r;
        }
        r--;
    }
    return r;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int r = gcd(x,y);
    return 0;
}*/
