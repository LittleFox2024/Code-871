//Inspect the list
#include <iostream>
using namespace std;

int showFullList();
int showItem(string&);

int inspectElement(string& item){
    int length = item.length();
    string constFull = "entire list";
    if (compareStrings(item, constFull)){
        showFullList();
    }
    else {
        showItem(item);
    }
    return 0;
}


int showFullList(){
    cout << "Complete List of commands:" << endl;
    cout << "\nSystem Call (You can use \"Inspect system commands\" for more info):\n" << endl;
    cout << "\tDestroy <element> - Delete a file.\n" << endl;
    cout << "\tEnhance Armament[: Release Recollection] - Elevate privileges." << endl;
    cout << "\t\tRelease Recollection gives you TI privileges on Windows, but requires gsudo.\n" << endl;
    cout << "\tExecute <command> - Execute a shell command. Uses your system's default shell.\n" << endl;
    cout << "\tInspect <Entire List | element> - Get help on an item.\n" << endl;
    cout << "\nCardinal: (You can use \"Inspect cardinal commands\" for more info).\n" << endl;
    cout << "\tExit - Exit the underworld.\n" << endl;
    return 0;
}

int showItem(string& item){
    string constDestroy = "destroy";
    string constEnhance = "enhance";
    string constExecute = "execute";
    string constGenerate = "generate";
    string constInspect = "inspect";
    string constExit = "exit";
    string constSys = "system commands";
    string constCar = "cardinal commands";

    string toCompare = item.substr(0, 7);
    if (compareStrings(toCompare, constDestroy)){
        cout << "Destroy Element" << endl;
        cout << "\tSyntax: \"Destroy <file name>\"." << endl;
        cout << "\tSubset: System Commands." << endl;
        cout << "\tResult: Deletes a file.\n" << endl;
    }
    
    if (compareStrings(toCompare, constEnhance)){
        cout << "Enhance Armament" << endl;
        cout << "\tSyntax: \"Enhance Armament[: Release Recollection]\"." << endl;
        cout << "\tSubset: System Commands." << endl;
        cout << "\tResult: Gives elevated privileges." << endl;
        cout << "\t\tThis requires sudo to work. If you are using Windows 11 23H2 or earlier ";
        cout << ", you will need to find a version of sudo and add it to your %PATH% variable." << endl;
        cout << "\t\tRelease Recollection give you TrustedInstaller Privileges. This only works on Windows, ";
        cout << "and requires gsudo to work.\n" << endl;
    }
    
    if (compareStrings(toCompare, constExecute)){
        cout << "Execute Command" << endl;
        cout << "\tSyntax: \"Execute <command>\"." << endl;
        cout << "\tSubset: System Commands." << endl;
        cout << "\tResult: Executes a shell command. This goes through the default system shell. In Windows ";
        cout << "this is \"cmd.exe\". In Linux, it's usually \"/bin/sh\".\n" << endl;
    }
    
    toCompare = item.substr(0, 8);
    if (compareStrings(toCompare, constGenerate)){
        cout << "Generate Element" << endl;
        cout << "\tSyntax: \"Generate <file name>\"." << endl;
        cout << "\tSubset: System Commands." << endl;
        cout << "\tResult: Creates a file.\n" << endl;
    }
    
    toCompare = item.substr(0, 7);
    if (compareStrings(toCompare, constInspect)){
        cout << "Inspect Element" << endl;
        cout << "\tSyntax: \"Inspect [Entire List | item] \"." << endl;
        cout << "\tSubset: System Commands." << endl;
        cout << "\tResult: Get help on a file. Entire list is everything, while one item ";
        cout << "gives more info on it.\n" << endl;
    }
    
    toCompare = item.substr(0, 4);
    if (compareStrings(toCompare, constExit)){
        cout << "Exit Program" << endl;
        cout << "\tSyntax: \"Exit\"." << endl;
        cout << "\tSubset: Cardinal Commands, Unfiled." << endl;
        cout << "\tResult: Exits the program." << endl;
        cout << "\tNote: You can use \"Cardinal::Exit\" or just \"exit\".\n" << endl;
    }
    
    
    return 0;
}