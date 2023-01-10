#include<stdio.h>
#include<conio.h>


#define ANSI_COLOR_BLACK "\x1b[30m"
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\e[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_WHITE "\e[37m"
#define ANSI_COLOR_REASET "\x1b[0m"

 // back ground color
 #define Bred "\x1b[40m"

int main()
{
    printf(ANSI_COLOR_GREEN "This is Green Color\n"ANSI_COLOR_REASET);
    printf(ANSI_COLOR_RED "This is Red color\n" ANSI_COLOR_REASET);
    printf(ANSI_COLOR_BLUE"This is Blue \n" ANSI_COLOR_REASET);
    printf(ANSI_COLOR_YELLOW"This is Yellow \n" ANSI_COLOR_REASET);
    printf(ANSI_COLOR_MAGENTA"This is Magenta \n" ANSI_COLOR_REASET);
    printf(ANSI_COLOR_CYAN"This is Cyan \n" ANSI_COLOR_REASET);
    printf(ANSI_COLOR_WHITE"This is WHITE \n" ANSI_COLOR_REASET);
    printf(Bred"Hello stdents\n"ANSI_COLOR_REASET);

    return 0;
}
//
//int main()
//{
//  printf("hellow before \b\b\b\b\n");
//  clear();
//  printf("Hello After \n");
//
//  return 0;
//}

