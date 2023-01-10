#include<stdio.h>
#include<conio.h>

int main()
{
  int a[2][2] = {3,1,2}, i,j;

  // print the above array in matrix 2X2 form
  for(i=0; i<2; i++)
  {
    for(j=0; j<2; j++)
    {
      if(i==1 && j==1)
         {
           while(1)
           {
              printf("",a[i][j]);
              getch();
           }
         }

      else
      printf("%2d   ",a[i][j]);


    }
    printf("\n");
  }



  return 0;
}
