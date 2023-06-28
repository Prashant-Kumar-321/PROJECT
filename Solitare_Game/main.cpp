#include "Solitaire.cpp"
#include <iostream>
using namespace std; 

int main(int argc, char*agrv[])
{  
  Deck Pile1, Diamond; 
  Pile1.insertCard(12,'H', false);
  Pile1.insertCard(1 ,'S', false);
  Pile1.insertCard(3 ,'S', false);
  Pile1.insertCard(9 ,'C', false);
  Pile1.insertCard(3 ,'H', true);
  Pile1.insertCard(2 ,'C', true);
  Pile1.insertCard(1 ,'D', true);

  cout<< "PILE1"<< endl;  
  Pile1.display();

  Pile1.moveToFoundation(Diamond);
  Pile1.moveToFoundation(Diamond);  
  Pile1.moveToFoundation(Diamond);  

  cout<< "DiaMond Foundation"<< endl; 
  Diamond.display(); 
  
  cout<< "PILE1"<< endl;  
  Pile1.display(); 

  return 0; 
}