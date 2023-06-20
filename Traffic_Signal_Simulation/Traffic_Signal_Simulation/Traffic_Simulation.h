#ifndef TRAFFIC_SIMULATION
#define TRAFFIC_SIMULATION

//Declaration of class Traffic Simulation
class TrafficSimulation
{
  private: 
    int green; 
    int yellow; 
    int red; 

  public: 
    TrafficSimulation(int, int, int); 
    void showSimulation(); 
  
  private: 
    void greenSignal(); 
    void yellowSignal(); 
    void redSignal(); 
};

#endif