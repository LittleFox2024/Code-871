/*
Includes functions when a System Call is called.
*/

//Include Statements
#include <iostream>

//syscommand Includes
#include "syscommands/generateElement.h"
#include "syscommands/destroyElement.h"
#include "syscommands/executeElement.h"
#include "syscommands/enhanceArmament.h"
#include "syscommands/inspectList.h"

using namespace std;


//Function Declarations
int executeSysCall(string&);
int generateElement(string&);
int destroyElement(string&);
int executeElement(string&);
int enhanceArmament(string&);
int inspectList(string&);
void code871();


//Function Definitions

int executeSysCall(string& fullCommand){
//Execute given command.
    size_t startPosition;
    size_t length = string::npos;
    string commandToSend;
    bool found = false;
    
    //Constants
    string constGen = "Generate";
    string constDes = "Destroy";
    string constExec = "Execute";
    string constIn = "Inspect";
    string constEnAr = "Enhance Armament";
    
    //Comparisons
    string toCompare = fullCommand.substr(13, 8);
    if(compareStrings(toCompare, constGen)){
        //Generate Element
        found = true;
        cout << "Generating..." << endl;
        startPosition = 22;
        commandToSend = fullCommand.substr(startPosition, length);
        generateElement(commandToSend);
    }
    
    toCompare = fullCommand.substr(13, 7);
    if(compareStrings(toCompare, constDes)){
        //Destroy Element
        found = true;
        cout << "Destroying..." << endl;
        startPosition = 21;
        commandToSend = fullCommand.substr(startPosition, length);
        cout << commandToSend;
    }
    
    if(compareStrings(toCompare, constExec)){
        //Execute Element
        found = true;
        cout << "Executing..." << endl;
        startPosition = 21;
        commandToSend = fullCommand.substr(startPosition, length);
        executeElement(commandToSend);
    }
    
    if(compareStrings(toCompare, constIn)){
        //Inspect List
        found = true;
        startPosition = 21;
        string constExact = "system call: inspect";
        if (!compareStrings(fullCommand, constExact)){
            commandToSend = fullCommand.substr(startPosition, length);
            inspectElement(commandToSend);
        }
        else {
            cout << "Nothing to inspect." << endl;
        }
    }
    
    toCompare = fullCommand.substr(13, 16);
    if(compareStrings(toCompare, constEnAr)){
        //Enhance Armament
        found = true;
        cout << "Enhancing Armament" << endl;
        startPosition = 29;
        commandToSend = fullCommand.substr(startPosition, length);
        enhanceArmament(commandToSend);
    }
    
    if(found == false){
        code871();
    }
    return 0;
}


int enhanceArmament(string& commandToSend){
    checkEnhancement(commandToSend);
    return 0;
}

void code871(){
    cerr << "SYSTEM ALERT! CODE 871!" << endl;
}