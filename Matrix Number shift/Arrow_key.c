#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // function system() using

void swap(int a, int b)
{
    a += b;
    b = a - b;
    a -= b;


}

int main()
{
//    char ch;
//    printf("Enter a character \n");
    // left --> 37
    // up arrow--->38
    // right -->39
    // down --> 40;
    // scanf("%c", &ch);
    // printf("%c", ch);

    // scanf("%c", &ch);
    // printf("%c", ch);

    // scanf("%c", &ch);
    // printf("%c", ch);

    // scanf("%c", &ch);
    // printf("%c", ch);

    //  char get;
    //  get = getch();

    //  if(get == 22472)
    //     printf("Up Arrow\n");
    // else if(get == 22475)
    //     printf("Left Arrow\n");
    // else if(get == 22477)
    //    printf("Right Arrow\n");
    // else if(get == 22480)
    //    printf("Down Arrow\n");
    // else if(get == 27)
    //    printf("ESC \n");
    // else if(get == 8)
    //    printf("Backspace\n");

    /*
        // Scroll key tester

        // int ch1, ch2;
        // printf("PRESS A KEY TO CONTINUE \n");
        // ch1 = getch();
        // ch2 = 0;
        // if (ch1 == 0xE0)
        // { // a scroll key was pressed
        //     ch2 = getch();
        //     // determine what it was
        //     switch (ch2)
        //     {
        //     case 72:
        //         printf("UP WAS PRESSED\n");
        //         break;
        //     case 80:
        //         printf("DOWN WAS PRESSED\n");
        //         break;
        //     case 75:
        //         printf("LEFT WAS PRESSED\n");
        //         break;
        //     case 77:
        //         printf("RIGHT WAS PRESSED\n");
        //         break;
        //     // ... we can set also others like HOME, END, PGUP, PGDOWN, ...
        //     default:
        //         printf("SOME OTHER SCROLL KEY PRESSED: %d %d\n", ch1, ch2);
        //         break;
        //     };
        // }
        // else
        //     printf("key pressed: %d %c\n", ch1, ch2);
        // // system("pause");
        return 0;
    */



    int a, b, key, toggle = 0;
    a = 1;
    b = 2;

//    printf("Enter 1 to exchange the value of a and b \nhit 2 to exit \n");

    while (1)
    {
        if(toggle == 0)
        {

            printf("%d        %d\b \n",a,b);
            key = getch();
            switch (key)
            {
            case 49:
                a += b;
                b = a-b;
                a -= b;

                system("cls");
                printf("%d\b           %d\n",a, b);
                break;
            case 50:
                return 0;
            }
            toggle = 1;
        }

        if(toggle == 1)
        {
            system("cls");
            printf("%d\b          %d\n",a,b);
            key = getch();
            switch (key)
            {
            case 49:
                a += b;
                b = a-b;
                a -= b;
                system("cls");
                printf("%d\b    %d\n",a, b);
                break;
            case 50:
              return 0;
            }
            toggle = 0;
            system("cls");
        }


    }
}
