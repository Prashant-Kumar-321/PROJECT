#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<random>

using std::cout; 

void shuffleArray(int* a, int n) 
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

} //end function O(N^2) and O(N); 

//Fisher-Yates Algorithm 
void fisher_yates_shuffle_algo(int [], int); 

void print(int a[], int n)
{
  int i; 
  for(i=0; i<n;i++)
    cout<< a[i]<< " "; 
  
  cout<< std::endl; 
}

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8,};
  int n = sizeof(arr)/sizeof(arr[0]); 
  
  print(arr, n);
  fisher_yates_shuffle_algo(arr, n); 
  fisher_yates_shuffle_algo(arr, n); 
  print(arr, 8);   

  return 0; 
}

//definition of fisher yates algorithm 
void fisher_yates_shuffle_algo(int arr[], int n)
{
  std::random_device rd; 
  std::mt19937 gen(rd()); //mersenne twister PRNG seeded by random number from rd

  for(int i=n-1; i>0; i--)
  {
    //Generate a random number in the range [0 to i]
    std::uniform_int_distribution<> dis(0, i); //Create a unform integer distributor object to gnerate random number in the range [0 to i]; 
    int j = dis(gen); 

    //swap ith and jth index element of the array 
    std::swap(arr[i], arr[j]); 
  }
}

