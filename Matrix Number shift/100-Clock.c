#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
  int ss = 0,i;
  for(i=0; i<20; i++)
  {
    ss = i;
    printf("second : %2d", ss);
    system("cls");
  }
  printf("Done\n");

  getch();
  return 0;
}
