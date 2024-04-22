#include <stdio.h>
#include <stdlib.h>
#include<C:\Program Files\CodeBlocks\MinGW\include\MyLibrary.h>
#define Highlight 0X70
#define Normal 0X07

int main()
{
    char ch;
    int i,cur=0,flag=0;
    char Menu[3][8]={"New","Display","Exit"};


do
{
textattr(Normal); //Normal
clrscr();
    for(i=0;i<3;i++)
    {
        if(cur == i)
        {
            textattr(Highlight);//Highlight
        }
        else
        {
          textattr(Normal);//Normal
        }
        gotoxy(10,7+i*3);
        printf("%s",Menu[i]);
    }

    ch = getche();
    switch(ch)
    {
        //Extended Case
        case 224:
        case -32:
        case 0:
            ch=getche();
            switch(ch)
            {
                case 72: //up
                    cur--;
                    if(cur<0)
                        cur=2;
                break;
                case 80: //down
                    cur++;
                    if(cur > 2)
                        cur = 0;
                break;
                case 71: //home
                    cur = 0;
                break;
                case 79: //end
                     cur = 2;
                break;
                case 73: // Page Up
                        cur--;
                        if (cur < 0)
                            cur = 2;
                break;
                case 81: // Page Down
                        cur++;
                        if (cur > 2)
                            cur = 0;
                break;
            }
          break;
        case 13://Enter
             if (cur == 0) //new
             {
                clrscr();
                printf("\n This is new page....");
                getche();
             }
             else if (cur ==1) //display
             {
                clrscr();
                printf("\n This is Display page....");
                getche();
             }

             else //exit
             {
                 flag =1;
             }
        break;
        case 9://Tab
             cur++;
             if(cur > 2)
                cur = 0;
        break;
        case 27://Esc
            flag = 1;
        break;
    }
}while(flag == 0);
    return 0;
}


