#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

void fill_unique(int array[], int length, int min, int max);

int main()
{
  srand(time(NULL) * getpid());

  int random_UNique_Number[10];

  fill_unique(random_UNique_Number, 10, 1,10);

  //print value of array
  for(int i=0; i<10; i++)
    printf("a[%d] = %2d\n",i,random_UNique_Number[i]);

  return 0;
}

void fill_unique(int array[], int array_length, int min, int max)
{
  int new_random, unique;

  for(int i=0; i < array_length; i++)
  {
    do
    {
      new_random = (rand() % (max-min + 1)) + min;

      unique = 0;

      for(int j=0; j<i; j++)
        if(new_random == array[j])
          unique = 1;

    }
    while(unique == 1);

    array[i] = new_random ;
  }

}
