#include <iostream>
#include "Process.h"

int main(){
    int pid;
    cout << "Enter pid: ";
    cin >> pid;

    Process process(pid);
    process.loadInformation();
    cout << "Name: " << process.getName() << endl;
    cout << "Status: " << process.getState() << endl;
    cout << "Threads: " << process.getThreads() << endl;
    cout << "PPid: " << process.getPPid() << endl;

    return 0;
}