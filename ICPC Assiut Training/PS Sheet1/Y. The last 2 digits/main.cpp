#include <iostream>

using namespace std;

int main()
{
   long long a,b,c,d,r;
	cin >>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    r=a%100*b%100*c%100*d%100;
	cout<<(r/10)%10<<r%10;
	return 0;
}
