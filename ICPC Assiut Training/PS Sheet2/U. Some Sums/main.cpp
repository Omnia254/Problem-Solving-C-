#include <iostream>

using namespace std;

int main()
{
    int n, minNum , maxNum;
    cin>>n>>minNum>>maxNum;
    long long sum =0;
    for(int i = 1 ; i<=n;i++)
    {
        if(i/10 == 0)
        {
            if(i>=minNum && i<=maxNum)
            {
                sum+=i;
            }
        }
        else
        {
            int myNumber = i ;
            int mySum = 0;
            while(myNumber)
            {
               int d = myNumber % 10;
               mySum +=d;
               myNumber /=10;
            }
            if(mySum >= minNum && mySum<= maxNum)
            {
                 sum +=i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
