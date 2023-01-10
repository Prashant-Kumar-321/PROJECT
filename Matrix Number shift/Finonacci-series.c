#include<stdio.h>
#include<conio.h>

int main()
{
//  int x = 56;
//  int y = 68;



  printf("Before Swapping\n");
  printf("x = %d , y = %d\n",x,y);

  x ^= y;
  y ^= x;
  x ^= y;

  printf("After swapping \n");
  printf("x = %d , y = %d \n",x, y);

/*
 Observing the behaviour of << and | & >> operator to swap
 or Storing data encryptedly in the varible

 printf("%d \n",6<<10); // 6 * 1024;
 printf("%d \n",(6<<3)|3);//51

 printf("%d \n",(5<<10)|2); // 5122
 printf("%d \n",(4<<10)|1); // 4097


 // Second loop
 printf("%d \n",(4097&1023));
 printf("%d \n",(4097>>10));

 printf("%d \n",(5122&1023));
 printf("%d \n",(5122>>10));

  printf("%d \n",(6147&1023));//3
  printf("%d \n",6147>>10);

  printf("%d \n",51 & 7);
  printf("%d \n",51 >> 3);

  printf("\n%d \n",(6<<2) | 3);
  printf("%d \n",(27&3));

  // Observing the Pattern
  // Swapping the vaue of two int variable

  int x,y,a,b;
  x = 6; y = 5;

  x <<= 10;
  x |= y ;

  a = x & 1023;
  b = x >> 10;

  printf("\n\na = %d",a);
  printf("\nb = %d \n",b);

  printf("%d ", (((4<<10))&1023));

*/

  getch();
  printf("\a");
  return 0;
}
