#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<stdbool.h>

void fill_unique(int array[], int length, int min, int max ); //  Function Declare

int main(void)
{

  /*Initializes random numbe generator
    pass seed value to srand function */
  srand(time(NULL)*getpid());

  int a[10];// Declaring 1D array of length(size) 10;

  fill_unique(a,10,50,100); // pass four argument

  // print random unique value of array
  for(int i=0; i<10; i++)
    printf("a[%d] = %2d\n\n",i, a[i]);

  return 0;
}

// function Definition
void fill_unique (int array[], int length, int min, int max )
{
  int new_random;
  bool unique; // can use flag also

  for(int i=0; i<length ; i++)
  {
    do
    {
      new_random = (rand() % (max-min+1)) + min ;

      unique = false; // let asssume new_random is unique

      for(int j=0; j<i; j++)
         if(array[j] == new_random)
            unique = true;

    }
    while(unique);

    array[i] = new_random;
  }
}
