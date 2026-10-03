#include "Process.h"
#include <iostream>
#include <fstream>
#include <sstream>

Process::Process(int pid) : pid(pid){
    file_path = "/proc/" + to_string(pid) + "/status";
}

void Process::loadInformation(){
    ifstream file(file_path);
    string line;

    if (!file.is_open()){
        cerr << "failed to open the file" << endl; 
    }

    while (getline(file, line)){
        stringstream ss(line);
        string label;
        ss >> label;

        if (label == "Name:"){
            ss >> name;
        }
        else if (label == "State:"){
            ss >> state;
        }
        else if (label == "Threads:"){
            ss >> threads;
        }
        else if (label == "PPid:"){
            ss >> ppid;
        }
    }

}


string Process::getName() const{
    return name;
}
string Process::getState()const{
    return state;
}
int Process::getThreads() const{
    return threads;
}
int Process::getPPid() const{
    return ppid;
}