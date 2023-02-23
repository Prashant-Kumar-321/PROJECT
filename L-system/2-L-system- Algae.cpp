#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
  string axiom = "B";
  string tem = "";
  int n = 0;

  cout<< "B    "<< 1<< endl;
  while(true)
  {
    for(int i = 0; axiom[i] != '\0'; i++)
    {
      if(axiom[i] == 'A')
      {
        tem += "AB";
        cout<< "AB";
      }
      else if(axiom[i] == 'B')
      {
        tem += "A";
        cout<< "A";
      }
    }

    axiom = tem;
    cout<< "      "<< axiom.length()<< endl;
    tem = "";
    getch(); // for paush;
  }

  return 0;
}
