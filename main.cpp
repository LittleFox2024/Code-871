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
#include "cardcall.h"

using namespace std;


//Function Declaration
int executeCommand(string&);


//Main
int main(){

    //Welcome
    cout << "Welcome to the Underworld!" << endl;
    while(true){
        //Variables
        string inputCommand = "";
        //Constants
        string exitCommand = "exit";
        string exactMatch = "System Call:";
        cout << ">"; //Prompt
        getline(cin, inputCommand); //Get input
        
        //Compare input to the constants
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
    bool found = false;
    //Strings to compare
    string SYSCALL = "System Call:";
    string CARDCALL = "Cardinal::";
    //Get substring
    sysCallString = command.substr(0, 12);
    //Comparisons
    if (compareStrings(sysCallString, SYSCALL)){
        found = true;
        executeSysCall(command);
    }
    sysCallString = command.substr(0, 10);
    if (compareStrings(sysCallString, CARDCALL)){
        found = true;
        executeCardCall(command);
    }
    if (found == false){
            cerr << "No Call Found." << endl;
            return 1;
    }
    return 0;
}