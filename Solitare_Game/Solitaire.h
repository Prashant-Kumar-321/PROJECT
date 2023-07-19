#pragma once 
//Telling compiler include this header file only once 
// regardless of including this in cpp file more than one times


#include<iostream>
#include<algorithm>
#include<random>

enum SUIT {DIAMOND = 0, SPADE = 3}; 
enum RANK {ACE = 1, KING = 13}; 


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
  public:
    Deck();  
    ~Deck(); 
    bool isEmpty()const; 
    void insertCard(int rank, char suit, bool visb); //insert card while intializing
    void moveToFoundation(Deck&fdn, char sut); //Move top card from src_Pile or draw_Pile Deck to dest foundation Deck 
    void moveToPile (Deck&dstnPile, card*srcTopCard);//Move card or group of cards from src pile or draw_Pile to destination Pile;  
    card* search(int rank, char suit); //Find Card with given rank and suit; 
    card* getFirst()const;
    void  intializeFullPackCard();     //insert in deck 52 cards; All cards(13) of each suit.
    card* getCard(int, card*&)const;       //Return Pointer to ith card from the deck and prev_card's pointer will be stored in reference card pointer variable
    void swapCard(card*&, card*, card*&, card*); //Swap order of two card in the deck; 
    void shuffleDeck();                           //shuffle cards in pack52 deck;              


    void display(card*);  //tmp funcation for debugging 
  private: 
    card* start;

  private: 
    bool should_i_move (Deck&dstnPile, card*srcTopCard); //Check whether it is possible to shift card from source pile to destination Pile OR draw_Pile to destination pile; 
    void deleteCard (); //delete first card from deck;
}; 

card* Deck::getFirst()const
{
  return start; 
}
