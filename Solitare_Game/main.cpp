#include "Solitaire.cpp"
#include <iostream>
using namespace std; 

int main(int argc, char*agrv[])
{  
  Deck pack; 
  pack.intializeFullPackCard(); 
  pack.shuffleDeck(); 

  return 0; 
}