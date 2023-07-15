#include "Solitaire.cpp"
#include <iostream>
using namespace std; 

int main(int argc, char*agrv[])
{  
  Deck pack; 
  pack.intializeFullPackCard(); 
  pack.display(pack.getFirst()); 

  return 0; 
}