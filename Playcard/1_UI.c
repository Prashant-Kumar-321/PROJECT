#include<stdio.h>
#include<conio.h>

// fn declaration.
void draw__UI();

int main()
{
  draw__UI();

  return 0;
}

// fn definition
void draw__UI()
{
  printf("\n\n");
  int i;

  printf("\t\t\t\t\t\tPLAYER 1 SPACE \n");
  for(i=0; i<7; i++) //printing first row;
  {
    if(i==0)
      printf("\t\t\t---------"); // printed 10_
    else
      printf("---------"); // printed 10_
  }

   printf("\n");
   for(i=0; i<7; i++) //printing second row;
  {
    if(i==0)
      printf("\t\t\t|%2c  %2d |",5,10);
    else
      printf(" %2c  %2d |",'*',00);
  }

  printf("\n");
  for(i=0; i<7; i++) // printing third row;
  {
    if(i==0)
       printf("\t\t\t---------");
    else
      printf("---------");
  }

  //printing secod row of cards ;
  printf("\n");
  for(i=0; i<7; i++) //printing first row;
  {
    if(i==0)
      printf("\t\t\t|%2c  %2d |",5,10);
    else
      printf(" %2c  %2d |",4,10);
  }

  printf("\n");
  for(i=0; i<7; i++) // printing third row;
  {
    if(i==0)
       printf("\t\t\t---------");
    else
      printf("---------");
  }

  printf("\n");
  printf("\t\t\t\t\t\t   CURR.CARD\n");
  printf("\t\t\t\t\t\t   |%2c  %2d | \n",3,5);
  printf("\t\t\t\t\t\t   ---------");


  printf("\n\n");
  printf("Helo player \a");
  getch();
//  printf("\t\t\t|_______|");

}
