/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     Write a short description
**                  of your code
**                  here.
*********************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using std::cout;
using std::ifstream;
using std::string;
using std::endl;

void count_letters(ifstream &inFile, int *intArr) {
    string abc = "abcdefghijklmnopqrstuvwxyz";
    int stringLength = 0;
    string input;
    string fileString;
    int counter = 0;

    cout << "Values read in file:\n";
    while (inFile >> input) {
        cout << input;
         fileString += input;
//        getline(inFile, input);
    }
    cout << endl;
    cout << "The string created is\n" <<fileString << endl;
    cout << "\nString length is " << fileString.size();
    stringLength = fileString.size();
    cout << endl;


    // make all characters lowercase
    for (int x = 0; x < stringLength; x++) {
        fileString[x] = tolower(fileString[x]);
    }

    cout << endl;
    cout << "Show lower case letters in string \n" << fileString << endl;
    cout << endl;

    for (int x = 0; x < 26; x++) {
        intArr[x] = 0;
    }
    cout << endl;

    for (int i = 0; i < abc.length(); i++) {
        for (int j = 0; j < stringLength; j++) {
            if (fileString[j] == abc[i]) {
                counter++;
            }
        }
        intArr[i] = counter;
    counter = 0;
    }

    cout << "\nPrint contents of pointer array\n";
    for (int z = 0; z < 26; z++) {
        cout << intArr[z] << " ";
    }
    cout << endl;
}