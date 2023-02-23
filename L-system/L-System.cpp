#include<iostream>
#include<conio.h>
#include<string>
#include<cstring>

using namespace std;
int main()
{
  /*
    string x = "A", Y = "";

    cout<< "A"<< endl;
    getch();

    while(true)
    {
        for(int i=0; x[i] != '\0'; i++)
        {
            if(x[i] == 'A')
            {
                Y += "AB";
                cout<< "AB ";
            }
            else if(x[i] == 'B')
            {
                Y += "A";
                cout<< "A ";
            }
        }

        x = Y;
        Y = "";
        getch();
        cout<< endl << endl;

    }

    */

    char x[10000] = "A";
    char Y[10000] = "";

    cout<< "A"<< endl<< endl;
    getch();

    while(true)
    {
      for(int i=0; x[i] != '\0'; i++)
      {
        if(x[i] == 'A')
        {
          strcat(Y,"AB");
          cout<< "AB ";
        }
        else if(x[i] == 'B')
        {
          strcat(Y,"A");
          cout<< "A ";
        }
      }
      strcpy(x,Y);
      strcpy(Y,"");
      cout<< endl;
      getch();
    }


    return 0;
}
