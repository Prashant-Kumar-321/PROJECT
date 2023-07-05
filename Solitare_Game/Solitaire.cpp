#include "Solitaire.h"

Deck::Deck()
{
  start = nullptr; 
}

Deck::~Deck()
{
  while(start)
    deleteCard(); 
}

//This function will play vital role while intializing cards in deck at the starting of game
void Deck::insertCard (int rank, char suit, bool visb=false) //Append a card at the starting of deck; 
{
  if(rank>0 && rank<=13 && suit == 'H' || suit == 'D' || suit == 'C' || suit == 'S')
  {
    card*n = new card; //Create new card
    //Ready card
    n->rank = rank;
    n->suit = suit; 
    //Set color to card
    if(n->suit == 'H' || n->suit == 'D') //If suit is HEART OR DIAMOND
      n->color = 'R'; 
    else                                 //If suit is CLUB OR SPADE
      n->color = 'B';

    n->visibility = visb; 
    n->next = start;                     //Set Pointer to first node in new node's next

    //Set pointer to new card in start; 
    start = n; 
  }
}

//It is important to deallocate all cards of deck; 
void Deck::deleteCard() //delete first card from the deck will be used in destructor; 
{
  if(start)
  {
    card*fst = start; 
    start = start->next; 
    delete fst; 
  }
}

//function Move Top card from DrawPile or Piles to foundation's deck; 
void Deck::moveToFoundation(Deck &fdn, char sut) //Called by piles or draw_Pile object; 
{
  if(fdn.start && start) //If Foundation AND SRC is Non-Empty
  {
    if(start->rank - fdn.start->rank == 1 && start->suit == fdn.start->suit)//When top card form source is one rank highter and of same suit as the top of fdn
    { 
      card*n = start; 
      start = start->next; 
      n->next = fdn.start; 

      if(start && !start->visibility) //Non-Empty Deck of Pile and Second card is not visibile
        start->visibility = true;     //Set visible to second card
      
      fdn.start->visibility = false; 
      fdn.start = n; 
    }else
      std::cout<< "Shifting of Card failed "<<std::endl; 
  }else if(!fdn.start && start && start->rank == 1 && start->suit == sut) //When foundation is Empty and pile non-Empty and rank of first card of Pile is 1(Ace) and of given suit
  {
      card*n = start; 
      start = start->next; 
      n->next = nullptr; 

      if(start && !start->visibility) //Non-Empty Deck of Pile and Second card is not visibile
        start->visibility = true;     //Set visible to second card
      
      fdn.start = n;  
  }
  else  
    std::cout<< "Shifting of card to respective foundation failed \n"; 
}

//Search a card in deck with given rank and suit; 
card* Deck::search(int rank, char suit)
{
  card*tmp = start; 
  while(tmp)
  {
    if(tmp->rank == rank && tmp->suit == suit)
      return tmp; 
    tmp = tmp->next; 
  }

  return nullptr;//search card doesn't exist in the deck;  
}

//Function will check should i move cards from source pile to destination pile
bool Deck::should_i_move (Deck &dstnPile, card *srcTopCard)
{
  switch(dstnPile.isEmpty())
  {
    case 1: //destination Pile is Empty
      if(srcTopCard->rank == 13)
        return true; 
      break; 
    case 0: //Destination Pile is not Empty
      if(dstnPile.start->rank - srcTopCard->rank == 1 && dstnPile.start->color != srcTopCard->color)
        return true; 
  }
  return false; 
}  

//Function to move card from source pile to destination pile; 
void Deck::moveToPile (Deck&dstnPile, card*srcTopCard)
{
  if(should_i_move(dstnPile, srcTopCard))
  {
    card*tmp = dstnPile.start; //reserve pointer to first card of destination pile
    dstnPile.start = start;    //Set Pointer to first card of source pile in destination's start member variable
    start = srcTopCard->next;  //set pointer to next card of srcTopCard of source pile in start member variable
    srcTopCard->next = tmp;    //srcTopCard's next point to first of destination pile;
  }
  //When next card of src pile is not visible, set true to its visibility
  if(start && !start->visibility)
    start->visibility = true; 
}

//Check if Deck is empty or not {if empty return true; or else return  false; }
bool Deck::isEmpty()const
{
  return start == nullptr; 
} 

void Deck::display(card*tmp)
{
  if(!tmp) //Base case
    return; 
  
  display(tmp->next);  //recrusive function call

//self work
  if(tmp->visibility)
    std::cout<< tmp->rank<< "_"<< tmp->suit<< "_"<< tmp->color<< std::endl; 
  else  
    std::cout<< "[Hidden]"<< std::endl;
}