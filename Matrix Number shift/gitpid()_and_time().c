#include<stdio.h>
#include<conio.h>

#include<time.h> // time() ;
#include<unistd.h> // getpid();

int main()
{
    int j;
    time_t s; // declare a variable of time_t type

    for(int i=0; i<20; i++)
    {
        // Observation of return value of time(NULL);

        for(j=0; j<2; j++) // no of iteration is 11
            printf("%d \n",time(NULL));
        // printing currrent time returned by time function
        //represented as integer

        // Observation of return value of getpid();

        //return value by getpid(); it returns process id
        for(j=0; j<2; j++)
            printf("%d \n",getpid());



        for(j=0; j<3; j++)
          printf("%d \n",time(&s));

         printf("\n\n");
         getch();
    }

    return 0;
}
