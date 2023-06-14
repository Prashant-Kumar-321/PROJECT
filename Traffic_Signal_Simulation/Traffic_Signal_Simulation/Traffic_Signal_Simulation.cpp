#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;
using namespace this_thread;  

void displayGreenSignal(int duration);
void displayYellowSignal(int duration);
void displayRedSignal(int duration);  

//Driver function
int main(int agrc, char*agrv[])
{
	system("cls"); 
	cout << "\t\tTraffic Signal Simulation\n\n" << endl;
	while(true)
	{
		displayGreenSignal(10);
		displayYellowSignal(4); 
		displayRedSignal(16);
	}

	return 0; 
}


void displayGreenSignal(int duration) 
{
    std::chrono::steady_clock::time_point endTime = std::chrono::steady_clock::now() + std::chrono::seconds(duration);

    int remainingTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - std::chrono::steady_clock::now()).count();
		std::cout<< "Signal: GREEN \n"; 
		std::cout<< remainingTime<< std::endl;
		std::cout<< "RULE: Proceed cautiously, "<< std::endl;  
		std::cout<< "      FOLLOW TRAFFIC  rules for a safe CROSSING "<< std::endl;  
		std::this_thread::sleep_for(std::chrono::seconds(1));
		system("cls");
	  std::cout << "\t\tTraffic Signal Simulation\n\n" << endl;

    while(std::chrono::steady_clock::now() < endTime) 
		{
			int remainingTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - std::chrono::steady_clock::now()).count();
			std::cout<< "Signal: GREEN \n"; 
			std::cout<< remainingTime<< std::endl;
		  std::cout<< "RULE: Proceed cautiously, "<< std::endl;  
		  std::cout<< "      FOLLOW TRAFFIC  rules for a safe CROSSING "<< std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			system("cls"); 
  	  std::cout << "\t\tTraffic Signal Simulation\n\n" << endl;

    }
}

void displayYellowSignal(int duration) 
{
    std::chrono::steady_clock::time_point endTime = std::chrono::steady_clock::now() + std::chrono::seconds(duration);

    int remainingTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - std::chrono::steady_clock::now()).count();
		std::cout<< "Signal: YELLOW \n"; 
		std::cout<< remainingTime<< std::endl;
		std::cout<< "RULE: Prepare to stop, "<< std::endl;  
		std::cout<< "      Slow Down and be ready for the RED Signal."<< std::endl;  
		std::this_thread::sleep_for(std::chrono::seconds(1));
		system("cls");
	  std::cout << "\t\tTraffic Signal Simulation\n\n" << endl;


    while(std::chrono::steady_clock::now() < endTime) 
		{
			remainingTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - std::chrono::steady_clock::now()).count();
			std::cout<< "Signal: YELLOW \n"; 
			std::cout<< remainingTime<< std::endl;
			std::cout<< "RULE: Prepare to stop, "<< std::endl;  
			std::cout<< "      Slow Down and be ready for the RED Signal."<< std::endl;  
			std::this_thread::sleep_for(std::chrono::seconds(1));
			system("cls");
			std::cout << "\t\tTraffic Signal Simulation\n\n" << endl;

    }
}

void displayRedSignal(int duration) 
{
    std::chrono::steady_clock::time_point endTime = std::chrono::steady_clock::now() + std::chrono::seconds(duration);

    int remainingTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - std::chrono::steady_clock::now()).count();
		std::cout<< "Signal: RED \n"; 
		std::cout<< remainingTime<< std::endl;
		std::cout<< "RULE: Come to complete Stop, "<< std::endl;  
		std::cout<< "      Turn off engine and Wait for the Signal Change."<< std::endl;  
		std::this_thread::sleep_for(std::chrono::seconds(1));
		system("cls");
	  std::cout << "\t\tTraffic Signal Simulation\n\n" << endl;

    while(std::chrono::steady_clock::now() < endTime) 
		{
			int remainingTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - std::chrono::steady_clock::now()).count();
			std::cout<< "Signal: RED \n"; 
			std::cout<< remainingTime<< std::endl;
			std::cout<< "RULE: Come to complete Stop, "<< std::endl;  
			std::cout<< "      Turn off engine and Wait for the Signal Change."<< std::endl;  
			std::this_thread::sleep_for(std::chrono::seconds(1));
			system("cls");
			std::cout << "\t\tTraffic Signal Simulation\n\n" << endl;
    }
}

