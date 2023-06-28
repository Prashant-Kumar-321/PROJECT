<h1>Traffic Signal Simulation</h1>
This is a project for simulating a traffic signal using C++. 
It provides a basic implementation of a traffic signal 
with customizable durations for the green, yellow, and red signals.

<h1>Prerequisites</h1>
To run the project, you need to have the following:

  C++ compiler
  C++ Standard Library
  Operating System: Windows (for system("cls") command)

<h2>Installation</h2>
    Clone the repository to your local machine by:

    git clone <repository_url>

<h2>Compile the source files using a C++ compiler:</h2>
    g++ main.cpp -o traffic_simulation

<h2>Usage</h2>

    Open a terminal or command prompt.

    Navigate to the directory where the compiled binary (traffic_simulation) is located.

<h3>Run the executable: bash</h3>
     ./traffic_simulation

The program will display the simulation of the traffic signal with the specified timings for each signal (green, yellow, and red). The simulation will continue indefinitely, cycling through the signals.

<h2>Customization</h2>

To customize the traffic signal timings, you can modify the values in the main.cpp file. The TrafficSimulation constructor takes three parameters: green, yellow, and red, representing the durations (in seconds) for each signal.

<h3>cpp</h3>

TrafficSimulation traffic1(<green_duration>, <yellow_duration>, <red_duration>);

Change the values of <green_duration>, <yellow_duration>, and <red_duration> to suit your requirements.

<h2>Acknowledgments</h2>
This project was created as a simple demonstration of traffic signal simulation in C++. Feel free to enhance and customize it according to your needs.

<h1>Author</h1>
Created by Prashant Kumar Gupta.