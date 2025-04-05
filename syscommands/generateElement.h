//Create a file
#include <fstream>
using namespace std;

int generateElement(string& command){
//Generate some element
    cout << command << endl;
    ofstream outFile(command);
    if (outFile.is_open()){
        outFile.close();
    }
    else {
        cerr << "Unable to create or open file!" << endl;
    }
    return 0;
}