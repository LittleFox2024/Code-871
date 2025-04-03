#include <cstdlib>
#include <cstring>
//Use system("<command>")

int executeElement(string& command){
/*Execute a command*/
    //Variables
    int length = command.length();
    char* sysCommand = new char[length + 1];
    //Copy the string to an array that system() can use
    strcpy(sysCommand, command.c_str());
    //Execute the command
    system(sysCommand);
    //Delete the array
    delete[] sysCommand;
    return 0;
}