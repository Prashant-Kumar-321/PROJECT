#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

// using comparing the current generated num with num we have added in the array yet;

void fill_unique(int b[][4], int min, int max);

int main()
{
    // provide a seed value to srand() function;
    srand(time(NULL) * getpid()) ;

    int a[4][4] ;

    fill_unique(a,1,16) ; //function call

   // printing the array
   for(int i = 0; i<4; i++)
   {
     for(int j=0; j<4; j++)
     {
       printf("%2d  ",a[i][j]);
     }
     printf("\n\n");
   }

    return 0;
}

// function definition
void fill_unique(int b[][4], int min, int max)
{
    int new_random, unique;

    for(int i = 0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            do
            {
                new_random = (rand() % (max-min + 1)) + min ;
                unique = 0;
                for(int k=0; k<=i; k++)
                {
                    if(k==i)
                    {
                        for(int l=0; l<j; l++)
                            {
                              if(b[k][l] == new_random )
                                unique = 1;

                            }
                    }

                    else
                        for(int l=0; l<4; l++)
                        {
                          if(b[k][l] == new_random)
                            unique = 1;
                        }

                }
            } while(unique);

            b[i][j] = new_random ;
        }
    }

}










