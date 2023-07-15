#include<iostream>
#include<cstdlib>
#include<ctime>

using std::cout; 

void shuffleArray(int* a, int n) // Fisher–Yates shuffle Algorithm
{
  //seeding random number generator
  srand(time(NULL)); 

  bool numLog[8]{false}; //Track occurrence of number
  int shuffled_arr[8];    

  for(int i=0; i<n; i++)
  {
    //Generate unique random number in the range 0-7; 
    int randNum; 
    do
    {
      randNum = rand()%8; //Generate random number in range [0-7]
    }while(numLog[randNum] == true);

    numLog[randNum] = true; //mark occurrence of randNum in numLog

    shuffled_arr[i] = a[randNum]; //assign randomNumber index element form array to shuffled_arr's ith index
  }

  //copy element form shuffled_arr into original array 
  for(int i=0; i<n; i++)
    a[i] = shuffled_arr[i]; 
}

void print(int a[], int n)
{
  int i; 
  for(i=0; i<n;i++)
    cout<< a[i]<< " "; 
  
  cout<< std::endl; 
}

int main()
{
  int arr[8] = {2,8,7,6,9,18,13,0}; 

  print(arr, 8); 
  shuffleArray(arr, 8); //call shuffling algorithm
  print(arr, 8); 
  shuffleArray(arr, 8);
  print(arr, 8);   
  shuffleArray(arr, 8);
  print(arr, 8);   
  shuffleArray(arr, 8);
  print(arr, 8);   
  shuffleArray(arr, 8);
  print(arr, 8); 
  print(arr, 8); 
  shuffleArray(arr, 8);
  print(arr, 8); 
  shuffleArray(arr, 8);
  print(arr, 8);   
  shuffleArray(arr, 8);
  print(arr, 8);   
  shuffleArray(arr, 8);
  print(arr, 8);   
  shuffleArray(arr, 8);
  print(arr, 8); 


  return 0; 
}
