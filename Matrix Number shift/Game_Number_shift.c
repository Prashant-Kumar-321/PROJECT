#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // rand(), srand(),
#include <time.h> // time(Null)
#include <unistd.h> // getpid() system("cls")
#include <windows.h>

int N = 3;

//Swapping function
void swap(int*a,int*b)
{
  int tem = *a;
  *a= *b;
  *b = tem;
}

// function to fill game matrix with random unique numbers
void Fill_matrix_with_unique_random_number(int a[N][N], int size, int min, int max)
{
    // provide srand function to a dynamic seed value  from time and getpid function
    srand(time(NULL) * getpid()); // random number Generator

    int RandomNumber, flag, i, j, k, l;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            do
            {
                RandomNumber = (rand() % (max - min )) + 1; // RandomNumber = [1,15];
                flag = 1;

                if ((i == (N-1)) && (j == (N-1))) // for the last place of an array ;
                {
                    a[i][j] = 0;
                    break;
                }

                // To make sure RandomNumber is unique in array
                for (k = 0; k <= i; k++)
                {
                    if (k == i)
                    {
                        for (l = 0; l < j; l++)
                            if (RandomNumber == a[k][l])
                                flag = 0;
                    }
                    else
                    {
                        for (l = 0; l < size; l++)
                            if (RandomNumber == a[k][l])
                                flag = 0;
                    }
                }

            }
            while (flag != 1);

            if (i == N-1 && j == N-1);
            else
                a[i][j] = RandomNumber;

        }
    }
}

// function that will print matrix;
void showMatrix(int a[][N], int size)
{
    int i, j;

    // To draw a line above matrix;
    printf("\t\t\t\t\t\t\t");
    for(i=0; i<=(size * 5); i++)
        printf("-");
    printf("\n");

    // printing array
    for (i = 0; i < size ; i++)
    {
        printf("\t\t\t\t\t\t\t|");
        for (j = 0; j < size; j++)
        {
            if (a[i][j] == 0)
                printf("    |");
            else
                printf(" %2d |", a[i][j]);
        }
        printf("\n");
    }

    // To draw line below matrix;
    printf("\t\t\t\t\t\t\t");
    for(i=0; i<=(size * 5); i++)
        printf("-");
    printf("\n");
}

// Win matrix function
void Fill_WinMatrix(int a[][N], int size)
{
    int i, j, n = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == N-1 && j == N-1)
                a[i][j] = 0;
            else
                a[i][j] = ++n;
        }
    }

}

int ReadkeyHitted()
{

    char c;

    c = _getch();
    if ((c == 0) || (c == -32))
        c = _getch();

    return c; // return key scan code
}

// Function definition for swap
int up_Shift(int a[N][N], int size)
{
    int i,j,flag = 0; // to maintain loop
    // Finding Blank cell in matrix
    for (i = 0; i < size; i++)
    {
      for (j = 0; j < size; j++)
      {
        if (a[i][j] == 0)
        {
          if ((i + 1) > (size-1)) //  swapping not possibel
            return 0;
          else              // Swapping is possible
            {
              flag = 1;
              break; //inner loop
            }
        }
      }
      if(flag == 1)
        break ; // outer loop for swapping
    }
    // swap the value of both memory location
    swap(&a[i][j], &a[i+1][j]);
    return 1;
}

int down_Shift(int a[N][N], int size)
{
    int i,j,flag = 0;

    // Finding Blank cell in matrix
    for (i=0; i<size; i++)
    {
        for (j=0;j<size;j++)
        {
            if (a[i][j] == 0)
            {
                if ((i - 1) < 0) //  swapping not possibel
                  return 0;
                else             // swapping is possibel
                {
                  flag = 1;
                  break;
                }
            }
        }
        if (flag == 1)
            break;
    }

    swap(&a[i][j], &a[i-1][j]);
    return 1;
  }

int left_Shift(int a[N][N], int size)
{
    int i,j,flag=0; // to make sure swapping has ocurred ;

    // Finding Black Cell in the Matrix(0);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (a[i][j] == 0)
            {
                if ((j + 1) > (size-1)) //  swapping not possibel
                  return 0;
                else             // Swapping is possibel
                {
                  flag = 1;     // a[i][j] and a[i][j+1]
                  break;
                }
            }
        }
        if (flag == 1)
            break;
    }
    // swapping the value of a[i][j] and a[i][j+1]
    swap(&a[i][j], &a[i][j+1]);
    return 1;
}

int right_Shift(int a[N][N], int size)
{
    int i, j, flag = 0; // to make sure swapping has ocurred ;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (a[i][j] == 0)
            {
                if ((j - 1) < 0) //  swapping not possibel
                  return 0;
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            break;
    }

    // Swapping the value of matrix
    swap(&a[i][j],&a[i][j-1]);
    return 1;
}

void Gamerules (int a[][N], int size)
{
    printf("\n\n\n\n \t\t\t\t\t\t\t\t\tMATRIX PUZZLE \n");
    printf("\t\t\t\t\t\t\t\t\t--------------\n\n\n");

    printf("\tRULES OF THE GAME \n\n");

    printf("\t1. You can Move Number only 1 CELL at a time by Arrow Keys !\n\n");
    printf("\t\tTO Move up : HIT Up Arrow key\n");
    printf("\t\tTO Move Down : HIT Down Aroow key\n");
    printf("\t\tTO Move Left : HIT Left Arrow Key \n");
    printf("\t\tTO Move Right : HIT Right Arrow key\n\n");

    printf("\t2. You can move Number only at empty position  \n\n");

    printf("\t3. For each valid Move : Your total number of moves will be decreased by 1. \n\n");

    printf("\t4. You have to arrange Elements of Matrix in Increaing order; for instance : \n\n");

//    printf("\t\tWinining Matrix\n");
//    printf("\t\t-----------------\n\n");
//
//    // winining matrix display
//
    printf("\t\t");
    for(int i=0; i <= (size*4); i++) // to print ----- at top of matrix;
        printf("-");
    printf("\n");

    for(int i=0; i<size; i++)
    {
        printf("\t\t|");
        for(int j=0; j<size; j++)
        {
            if(a[i][j] == 0)
                printf("   |");
            else
                printf("%2d |", a[i][j]);
        }
        printf("\n");
    }

    printf("\t\t");
    for(int i=0; i <= (size*4); i++) // to print ---- to bottom
        printf("-");

    printf("\n\n");

    printf("\t5. You can exit the Game at any time by pressing \'E\' or \'e\'\n\n");
    printf("\tSo Try to win in minimimum no of moves \n");
    printf("\tEnter any key to start Game.... \n\a");
    getch();
}

// comapare matrix and winmatrix
int CompareMatrix(int a[][N], int b[][N], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(a[i][j] != b[i][j])
               return 0;
        }
    }
    return 1; // Original matrix has been solved
}

// convert player in upper case
void convertUppercase(char *a)
{
  int i;
  for(i=0; a[i]; i++)
  {
    if(a[i]>=97 && a[i]<=122)
      a[i] = a[i] - 32;
  }
}

// Driver Code
int main()
{
//    int matrix[N][N];
    int (*M)[N] = (int(*)[]) calloc(9,sizeof(int));
//    int winMatrix[N][N];
    int (*WM)[N] = (int(*)[]) calloc(9,sizeof(int));

    int Movetry = 250, userneed = 0;
    int PreMovetry = Movetry; //Storing PreMovetry
    char key, choice;

    char playername[40];
    printf("Enter Player Name: ");
    gets(playername);
    system("cls");
    convertUppercase(playername); // convert player name in upper case

    Fill_WinMatrix(WM, N); // function call to fill win matrix
    Gamerules(WM, N);      // display the rules of the Games;



    while(1)
    {

        Fill_matrix_with_unique_random_number(M, N, 1,(N * N ));// function call to fill matrix with random number
        Fill_WinMatrix(WM, N); // function call to fill win matrix


        if((userneed == 'a') || (userneed == 'A'))
            Gamerules(WM, N);  // function call to display the rules of the game; if user want

        printf("\n\n\n\n");

        while(!(CompareMatrix(M, WM, N)))
        {
            if(!Movetry) // if Movertry 0 !0 == 1 then it will break while loop ;
                break;


            system("cls"); // clear previous data
            printf("\n\n\n\n\n");
            printf("\t\t\t\tPlayer Name: %s",playername);
            printf("\t\t\t\tYou have %d Moves left      LEVEL: %d\n\n",Movetry,(N-2));


            printf("\n\n\n\n\n");
            showMatrix(M, N); // function printing matrix (to be solved);

            key = ReadkeyHitted(); // function returning key scan code

            // mapping
            switch(key)
            {
            case 'E': case 'e':
                free(M);
                free(WM);
                exit(1);
                break;
            case 72:
                if(up_Shift(M,N))
                    Movetry--;
                break;
            case 75:
                if(left_Shift(M, N))
                    Movetry--;
                break;
            case 77:
                if(right_Shift(M, N))
                    Movetry--;
                break;
            case 80:
                if(down_Shift(M, N))
                    Movetry--;
                break;
            }
        }


        // After wining or losing  For the next and try again
        if(Movetry == 0)
        {
            system("cls");
            printf("\n\n\n\n\n");
            printf("\t\t\t\tPlayer Name: %s",playername);
            printf("\t\t\t\tYou have %d Moves left      LEVEL : %d \n\n",Movetry,(N-2));
            showMatrix(M, N); // function printing matrix (to be solved);

            printf("\t\tYou Lose the game \n\a\a");
            printf("\t\tTo Try once again HIT 'Y' or 'y' (or)  \n\t\tTo Exit hit 'e' \'E' \n");
            choice = getch();

            // Same leve game // Dimension of matrix will not change
            // Decision statement
            switch(choice)
            {
            case 'Y': case 'y':

                printf("\t\tBEST OF LUCK !\n\n");
                printf("\t\tTo see the Game rule hit 'A' or 'a' \n\t\t");
                userneed = getch();
                break;

             default:
                      free(M);
                      free(WM);
                      exit(0);

            }

            Movetry = PreMovetry; // reset the value of movetry;

        }
        // levels of Game might be changed // Player has solved the puzzle
        else
        {
            system("cls");
            printf("\n\n\n\n\n");
            printf("\t\t\t\tPlayer Name: %s",playername);
            printf("\t\t\t\tYou have %d Moves left      LEVEL: %d\n\n",Movetry,(N-2));

            showMatrix(M, N); // function printing matrix (to be solved);
            printf("\t\tCONGRATULATION YOU HAVE BEAT THE LEVEL !!\n\n\a");
            printf("\t\tTo play Game again hit 'Y' or 'y'\n\t\tTo Exit hit 'e' \'E' \n\n");
            choice = getch();

            // Decision statement
            switch(choice)
            {
            case 'y': case 'Y':
                printf("\t\tPress 'U' To Enter in Next level (or)\n\t\tTo Play Once again this level HIT 'C'\n");

                // Asking players to increse Game level
                choice = getch(); // taking input
                if(choice == 'U' || choice == 'u')
                {
                  N++;

                  switch(N)
                  {
                  case 4:
                    M = realloc(M,16*sizeof(int));
                    WM = realloc(WM,16*sizeof(int));
                    Movetry = 500;
                    PreMovetry = Movetry;
                    break;

                  case 5:
                     M = realloc(M,25*sizeof(int));
                     WM = realloc(M,16*sizeof(int));
                    Movetry = 800;
                    PreMovetry = Movetry;
                  }
                }
                else
                 Movetry =  PreMovetry;

                printf("\t\tTo see Game rule hit 'A' or 'a' \n\t\t");
                userneed = getch();
                break;

            case 'e': case 'E':
            default:
                free(M);
                free(WM);
                exit(0);

            }
            system("cls");
        }

    }

    return 0;
}
