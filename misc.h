/*
Include miscellanies functions.
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//Functions
bool compareStrings(string&, string&);

//Definitions
bool compareStrings(string& str1, string& str2){
    //Used to compare strings. From geeksforgeeks.com
    if (str1.length() != str2.length())
        return false;

    for (int i = 0; i < str1.length(); ++i) {
        if (tolower(str1[i]) != tolower(str2[i]))
            return false;
    }

    return true;
}
