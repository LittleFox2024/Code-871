/*
Includes functions when a Cardinal Call is called.
*/

//Include Statements
#include <iostream>
#include <exception>
using namespace std;

//Function Declarations
int executeCardCall(string&);
int createUser(string&);


//Function Definitions
int executeCardCall(string& fullCommand){
//Execute given command.
    size_t startPosition;
    size_t length = string::npos;
    string commandToSend;
    bool found = false;
    
    //Constants
    string constEXIT = "Exit";
    
    //Comparisons
    string toCompare = fullCommand.substr(10, 4);
    cout << toCompare << endl;
    if(compareStrings(toCompare, constEXIT)){
        //Exit
        found = true;
        cout << "Exiting..." << endl;
        exit(0);
    }
    
    
}