#include<iostream>
#include<random>

int main(void)
{
  std::random_device rd; //create a random_device object to obtain random number will be helped to seed PRNG
  std::mt19937 generator(rd()); //Create mersenne twister PRNG object and seed with random number obtained from random _device

  // std::uniform_int_distribution<> distributor(-9, 9); //create uniform object to generate random integer in between [0,9];

  for(int i=0; i<10; i++)
  {
    std::uniform_int_distribution<> distribution(i, 10); 
    std::cout<< i<< " "<< 10<< " : "<< distribution(generator)<< " \n"; 
  }  
  std::cout<< std::endl; 

  return 0; 
}
