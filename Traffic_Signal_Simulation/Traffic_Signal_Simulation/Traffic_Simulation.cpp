#include<iostream>
#include<chrono>
#include<thread>

#include "Traffic_Simulation.h"

using namespace std; 
// using namespace std::chrono;
using namespace std::this_thread; 

TrafficSimulation::TrafficSimulation(int grn, int yel, int rd)
{
  green = grn; 
  yellow = yel; 
  red = rd; 
}

void TrafficSimulation::greenSignal()
{
  int remaining_time = green;
  
  while(remaining_time>=0)
  {
    cout<< "\t\tTRAFFIC SIGNAL SIMULATION \n\n"; 
    cout<< "SIGNAL :: GREEN \n"; 
    cout<< "TIMING :: "<< remaining_time<< endl; 
    cout<< "RULE   :: "<< "Proceed Cautiously"<< endl; 
		cout<< "          FOLLOW TRAFFIC  Rules for a SAFE CROSSING "<< endl;

    sleep_for(1s); //Stop execution of program for 1 second (s --> user-defined literals)
    remaining_time--; 
    system("cls");   
  }

  yellowSignal(); //Call the Yellow signal method
}

void TrafficSimulation::yellowSignal()
{
  int remaining_time = yellow;
  
  while(remaining_time>=0)
  {
    cout<< "\t\tTRAFFIC SIGNAL SIMULATION \n\n"; 
    cout<< "SIGNAL :: YELLOW \n"; 
    cout<< "TIMING :: "<< remaining_time<< endl; 
    cout<< "RULE   :: "<< "Prepare to Stop , "<< endl; 
	  cout<< "          Slow Down and be Ready for the RED Signal."<< endl; 

    sleep_for(1s); //Stop execution of program for 1 second
    remaining_time--; 
    system("cls");   
  }

  redSignal(); // Red signal called 
}

void TrafficSimulation::redSignal()
{
  int remaining_time = red;
  
  while(remaining_time>=0)
  {
    cout<< "\t\tTRAFFIC SIGNAL SIMULATION \n\n"; 
    cout<< "SIGNAL :: RED \n"; 
    cout<< "TIMING :: "<< remaining_time<< endl; 
    cout<< "RULE   :: "<< "Come to Complete Stop"<< endl; 
		cout<<"          Turn off Engine and Wait for the SIGNAL Change."<<endl; 

    sleep_for(1s); //Stop execution of program for 1 second
    remaining_time--; 
    system("cls");   
  }

  greenSignal(); 
}  

void TrafficSimulation::showSimulation(){
  greenSignal();
} 
