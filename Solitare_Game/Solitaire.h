#pragma once //Telling compiler only include this header file twice regardless of adding this two or more times

#include<iostream>

struct card
{
  int  rank; 
  char suit; 
  bool visibility; 
  char color; 
  card*next; 
}; 

class Deck
{
  private: 
    card*start; 
  public:
    Deck();  
    ~Deck(); 
    void insertCard (int rank, char suit, bool visb); //insert card while intializing
    void deleteCard (); 
    // void insert_in_foundation (int rank, char suit); //insert card in foundation deck; 
    // void deleteFirst(); //Delete First card
    // void arrange_some_top_card(); 

    // //Friend Function Declaration 
    void moveToFoundation(Deck&dstn); //Move top card from src Deck to dest Deck 
    // friend bool isWin(const Deck&heart, const Deck&diamonds, const Deck&clubs, const Deck&spade); 

    void display(); 
}; 

// void Deck::insertCard (int rank, char suit, bool visb)
// {
//   if(rank>0 && rank<=13 && suit == 'H' || suit == 'D' || suit == 'C' || suit == 'S')
//   {
//     card*n = new card; //Create new card
//     //Ready card
//     n->rank = rank;
//     n->suit = suit; 
//     if(n->suit == 'H' || n->suit == 'D') //If suit is HEART OR DIAMOND
//       n->color = 'R'; 
//     else                                 //If suit is CLUB OR SPADE
//       n->color = 'B';

//     n->visibility = visb; 
//     n->next = start;                     //Set Pointer to first node in new node's next

//     //Set pointer to new card in start; 
//     start = n; 
//   }
// }

// //function Move Top card from DrawPile or Piles to foundation's deck; 
// void Deck::moveToFoundation(Deck &fdn) 
// {
//   if(fdn.start && start) //If foundation AND SRC is non-empty
//   {
//     if(start->rank - fdn.start->rank == 1 && start->suit == fdn.start->suit)//When top card form source is one rank highter and of same suit as the top of fdn
//     { 
//       card*n = start; 
//       start = start->next; 
//       n->next = fdn.start; 

//       if(start && !start->visibility) //Non-Empty Deck of Pile and Second card is not visibile
//         start->visibility = true;     //Set visible to second card
      
//       fdn.start->visibility = false; 
//       fdn.start = n; 
//     }
//   }else if(!fdn.start && start && start->rank == 1) //When foundation is Empty and pile non-Empty and rank of first card of Pile is 1(Ace)
//   {
//       card*n = start; 
//       start = start->next; 
//       n->next = nullptr; 

//       if(start && !start->visibility) //Non-Empty Deck of Pile and Second card is not visibile
//         start->visibility = true;     //Set visible to second card
      
//       fdn.start = n;  
//   }
// }

// void Deck::display()
// {
//   card*tmp = start; 
//   while(tmp)
//   {
//     std::cout<< tmp->rank<< "_"<< tmp->suit<< "_"<< tmp->color<< "     , "; 
//     tmp = tmp->next; 
//   }
//   std::cout<< std::endl;
// }
