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
    char letterArr[500];
    char alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};
    string abc = "abcdefghijklmnopqrstuvwxyz";
    int stringLength = 0;
    char charsInfile[27];
    char letter;
    string input = "";
    string fileString = "";
    int counter = 0;
    int *ptr = nullptr;

    cout << "Values read in file:\n";
    while (inFile >> input) {
        cout << input;
        fileString += input;
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

    ptr = new int[26];
    for (int x = 0; x < 26; x++) {
        ptr[x] = 0;
    }
    cout << endl;

    for (int i = 0; i < abc.length(); i++) {
        for (int j = 0; j < stringLength; j++) {
            if (fileString[j] == abc[i]) {
                counter++;
            }
        }
    ptr[i] = counter;
    counter = 0;
    }

    cout << "\nPrint contents of pointer array\n";
    for (int z = 0; z < 26; z++) {
        cout << ptr[z] << " ";
    }
    cout << endl;

    intArr = ptr;

    delete [] ptr;

    ptr = nullptr;

//    while (inFile >> letter) {
//        testCounter++;
//    }
//    inFile.clear();
//    inFile.seekg(0);
//
//    while (inFile >> letter) {
//        letterArr[counter] = letter;
//        cout << letter << " ";
//        cout << "\nCounters is at " << counter << endl;
//        counter++;
//    }
////    cout << "\nCounter is at " << counter << endl;
//
//    cout << "Letters saved in array\n";
//    for (int i = 0; i < 52; i++) {
//        cout << letterArr[i] << " ";
//    }
//    cout << endl;

    // 1. transfer file contents into a string stream;
    // 2. convert char to lower case
    // 3. all all of the characters in the input file are then
    //    added to a new array
    // 4. count frequency (2 approaches)
    // 4a. count total instances of characters in the array
    // 4n. only add characters to the array if they have not
    //     been previously added. If it already exist, use
    //     the array pointer to maintain count of each frequency
    //     in each letter of the alphabet
    // 5. organize alphabetically / output results to file

}