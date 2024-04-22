#include <stdio.h>
#include <stdlib.h>

void PrintLine()
{
    int i;
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int X=10,Y=5;
    printf("\n X = %d",X);
    PrintLine(); //call
    printf("\n Y = %d",Y);
    return 0;
}
