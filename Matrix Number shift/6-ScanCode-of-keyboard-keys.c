#include<stdio.h>
#include<conio.h>
//

int main()
{

  char c;
  do
  {
   printf("Enter a character \n");
   c = _getche();

   if(c == -32)
    c = _getch();

   printf("\nScan code  = %d ",c);
   getch();
   system("cls");
  }while(c != 27);

  return 0;
}





