#include<stdio.h>
#include<conio.h>

int main()
{
  int a[100], i, n = 0, Pos;

  printf("Enter Number of elements you want to enter \n");
  scanf("%d",&n);

  printf("Enter elements \n");
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);

  printf("Enter postion of elements you want to delet : ");
  scanf("%d",&Pos);

  if(Pos>n)
    printf("Deletion of elements Not possible\n");
  else
  {
    for(i = (Pos-1); i < (n-1); i++)
      a[i] = a[i+1];


    // print remaining array
    printf("[ ");
    for(i=0; i<n-1; i++)
      printf("%2d ", a[i]);

    printf(" ];\n");
  }

  return 0;
}
