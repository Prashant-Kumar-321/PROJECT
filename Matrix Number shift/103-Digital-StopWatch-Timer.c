#include<stdio.h>
#include<conio.h>
#include<windows.h> // To implement sleep Operation
#include<unistd.h>  // To implement sleep Operation

#define TRUE 1

void print();

int main()
{
  int h = 0, m = 0, s = 0;// h=hour, m=min, s=second, ms= millisecond

  char ch; // to make program more dyanamic

  printf("Enter Your choice \n\n");
  printf("Press 'A' For STOPWATCH \n");
  printf("Press 'B' For TIMER \n");

  ch = _getch();// taking choice of user

  switch(ch)
  {
  case 'A':
  case 'a':
          system("cls"); // clear screen
          while(TRUE)
          {
            printf("\t    STOPWATCH\n\n");
            printf("********************************\n");
            printf("  Hour:%2d Minute:%2d Second:%2d  \n",h,m,s);
            printf("********************************\n");// /r is being used to update the time ;

            sleep(1);// sleep program for 1 second
            system("cls");
            s++;

            if(s==60) // For minute ( One minute done )
            {
              s = 0;
              m++;
              if(m==60) // for Hour (1 hour done);
              {
                m=0;
                h++;
                if(h==24)
                {
                  h=0;
                }
              }
            }
          }

  case 'b':
  case 'B':
          system("cls");

          printf(" SET TIMER \n\n");
          printf(" HH:MM:SS (Given Formate)*\n "); // formate important
          scanf("%d:%d:%d:",&h,&m,&s);

          system("cls");

          printf("\t  COUNT DOWN START \n\n");
          while (TRUE)
          {
            printf("\r  Hour:%2d Minute:%2d Second:%2d ",h,m,s);
            sleep(1); // sleep program 1 second
            s--;
            if(s==0 && m != 0)
            {
              s=59;
              m--;
              if(m == 0 && h != 0)
              {
                m = 59;
                h--;
              }
            }

            else if(s == 0 && m == 0)
            {
              printf("\r  Hour:%2d Minute:%2d Second:%2d ",h,m,s);
              break;
            }
          }

          printf("\n  TIME UP! \a\n");
          printf("\n  TIME UP! \a\n");

  }


}

