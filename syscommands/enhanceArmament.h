#include <cstdlib>
#include <cstring>

//Function Declarations
int checkEnhancement(string&);
int enhanceElement();
int relRec(string&);

//Function Definitions
int checkEnhancement(string& command){
/*Check enhancement type*/
    string constRRC = ": Release Recollection";
    cout << command << endl;
    if (!(compareStrings(command, constRRC))){
        enhanceElement();
    }
    else{
        relRec(command);
    }
    return 0;
}

int enhanceElement(){
/*Execute a command*/
    //Variables
    #if defined(_WIN32) || defined(_WIN64)
    string constSudo = "sudo cmd";
    #elif defined(__linux__) || defined(__APPLE__) || defined(__MACH__) || defined(__unix__)
    string constSudo = "sudo -i";
    #else
    string constSudo = "echo Unknown System."
    #endif
    int length = constSudo.length();
    char* sysCommand = new char[length + 1];
    //Copy the string to an array that system() can use
    strcpy(sysCommand, constSudo.c_str());
    //Execute the command
    system(sysCommand);
    //Delete the array
    delete[] sysCommand;
    return 0;
}

int relRec(string& command){
/*Release Recollection. TI mode in Windows, nothing in *NIX.*/
    #if defined(_WIN32) || defined(_WIN64)
    string constRun = "gsudo --ti";
    #else
    string constRun = "echo This feature is not supported yet.";
    #endif
    int length = constRun.length();
    char* sysCommand = new char[length + 1];
    strcpy(sysCommand, constRun.c_str());
    system(sysCommand);
    delete[] sysCommand;
    return 0;
}