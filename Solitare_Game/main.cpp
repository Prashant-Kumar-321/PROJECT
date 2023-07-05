#include "Solitaire.cpp"
#include <iostream>
using namespace std; 

int main(int argc, char*agrv[])
{  
  Deck drawPile, Club;

  Club.insertCard(13,'C'); 
  Club.insertCard(9,'C'); 
  Club.insertCard(13,'C'); 
  Club.insertCard(6,'C'); 
  Club.insertCard(5,'C',true);   
  // Club.display(Club.getFirst());

  // drawPile.insertCard(10,'D');
  drawPile.insertCard(13,'H'); 
  drawPile.insertCard(9,'D');
  drawPile.insertCard(1,'C',true);
  // drawPile.display(drawPile.getFirst()); 

  drawPile.moveToFoundation(Club, 'C'); 

  cout<< "drawPile"<< endl; 
  drawPile.display(drawPile.getFirst());cout<< endl; 

  cout<< "Club"<< endl; 
  Club.display(Club.getFirst());   

  return 0; 
}