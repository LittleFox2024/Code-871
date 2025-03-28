/*
This is a shell for Windows based off of the "System Call" functionality in
Sword Art Online: Alicization.

This is a fan made project. Sword Art Online is owned by Reki Kawahara, A-1 Pictures and
Aniplex USA.
*/

//Include Statements
#include <iostream>
#include <string>
#include <cctype>
#include "misc.h"
#include "syscall.h"

using namespace std;


//Function Declaration
int executeCommand(string&);



//Main
int main(){

    //Welcome
    cout << "Welcome to the Underworld!" << endl;
    while(true){
        string inputCommand = "";
        string exitCommand = "exit";
        string exactMatch = "System Call:";
        cout << ">";
        getline(cin, inputCommand);
    
        if (!(compareStrings(inputCommand, exitCommand))){
            if (!(compareStrings(inputCommand, exactMatch))){
                executeCommand(inputCommand);
            }
        }
        else{
            break;
        }
    }
    return 0;
}



//Function definitions

int executeCommand(string& command){
//Contains code to execute commands
    //Create string for comparison
    string sysCallString;
    string SYSCALL = "System Call:";
    sysCallString = command.substr(0, 12);
    if (compareStrings(sysCallString, SYSCALL)){
        cout << "System Call!!!" << endl;
        executeSysCall(command);
    }
    else{
        cout << "No sys call :(" << endl;
    }
    return 0;
}