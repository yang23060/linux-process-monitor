#ifndef PROCESS_H
#define PROCESS_H
#include<string>

using namespace std;

class Process{ 
    public: 
        Process(int pid);
        void loadInformation();
        string getName() const;
        string getState()const;
        int getThreads() const;
        int getPPid() const;

    private: 
        int pid;
        string name;
        string state;
        int threads;
        int ppid;
        string file_path;

};

#endif