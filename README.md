Linux Process Monitor

A simple C++ command-line project that grabs and displays information about a Linux process using its Process ID (PID).

Features:
The program asks the user for a PID and reads information from:
    /proc/<PID>/status

It currently displays:
  1. Process name
  2. Process state
  3. Number of threads
  4. Parent Process ID (PPID)

Example: 
  Enter pid: 1
  Name: bash
  State: S
  Threads: 1
  PPid: 0


How to Compile?  
  Compile the project with: g++ -g main.cpp Process.cpp -o process-monitor
  The -g option includes debugging information for GDB.

How to Run?
  ./process-monitor
  Enter the PID of a running Linux process when prompted.


What I Learned:
Through this project, I practiced:
* Reading files in C++
* Parsing text using stringstream
* Using C++ classes and header/source files
* Working with Linux’s /proc filesystem
* Understanding Linux process information
* Compiling and debugging C++ programs on Linux
