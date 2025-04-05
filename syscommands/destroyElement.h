//Delete a file
#include <filesystem>
#include <cstdio>
using namespace std;

int destroyElement(string& command){
//Delete some element
    const char* filename = "command";
    if (remove(filename) == 0) {
        cout << "File removed successfully." << endl;
    } else {
        cerr << "Error deleting file." << endl;
    }
    return 0;
}