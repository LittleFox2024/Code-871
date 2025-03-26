#include <cstdlib>
#include <cstring>
//Use system("<command>")

int executeElement(string& command){
    //Execute
    
    //SysCommand
    string cmd = "cmd /C"; //This is for Windows. Exclude this on Mac/Linux.
    string fullCommand = cmd + command;
    int length = fullCommand.length();
    char* sysCommand = new char[length + 1];
    strcpy(sysCommand, fullCommand.c_str());
    system(sysCommand);
    
    delete[] sysCommand;
    return 0;
}