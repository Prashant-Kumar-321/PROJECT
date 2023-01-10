#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
    int ms = 0, s = -1, M = 0,H = 0, i;

    while(1)
    {
        s++;

        for(i=0; i<15; i++)
        {
            printf("\t\tHour: %2d \n\t\tMinute: %2d \n\t\tSecond : %2d \n\t\tMili Second: %2d \n\t\t",H,M,s,i);
            system("cls");
        }

        if(s == 60)
        {
            s = -1;
            M++;
            if(M==60)
            {
                H++;
                M = 0;
            }
        }
    }

    getch();
    return 0;
}
