#include<stdio.h>
#include<conio.h>

int Compare_array(int a[2][2], int b[2][2], int size)
{
  int flag = 1,i,j;// Assuming both array are equal

  // Traversing through each element of array and comparing each corresponding element of both;
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      if(a[i][j] != b[i][j])
      flag = 0;
    }
  }

  return flag;
}

void printArray(int a[2][2], int size)
{
  int i, j;
  for(i=0; i<size ; i++)
  {
    printf("[ ");
    for(j=0; j<size; j++)
      printf("%d ",a[i][j]);

    printf("]\n");

  }

}

int main()
{
  int A1[2][2] = {{1,6}, {2,1} } , A2[2][2] = {{1,6}, {2,1}};
  int flag = 1, i,j;

  printArray(A1, 2);
  printf("\n");
  printArray(A2, 2);


  // i want to compare two array whether they are equal or not


  /* One way is to compare each element of A1 with A2
for(i=0; i<2; i++)
  {
    for(j=0; j<2; j++)
    {
      if(A1[i][j] != A2[i][j])
        flag = 0; // indicator which will tell us whether the A1 == A2 or not
    }
  }

  if(flag == 1)
    printf("\nYou win !\n");
  else
    printf("\nYou lose !\n");

  */
  flag = Compare_array(A1, A2, 2);

  if(flag == 1)
    printf("You won!\n");
  else
    printf("You lose \n");

  getch();
  return 0;
}

