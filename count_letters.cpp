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
    char charsInfile[27];
    char letter;
    string input;
    string fileString;
    char stringRead;
    char ltrVal;
    int counter = 0;
    int testCounter = 0;
    int *ptr = nullptr;


    while (!inFile.fail()) {
        cout << input;
        inFile >> input;
        fileString += input;
    }
    cout << "String length is " << fileString.length();
    cout << endl;

    cout << "string created is \n" << fileString << endl;
    if (fileString[0] == 65) {
        cout << "If smtmt " << fileString[0] << endl;
    }


    cout << fileString[1] << endl;
    cout << fileString[2] << endl;

    for (int i = 0; i < fileString.length(); i++) {
        // check if character is already in po



        for (int j = 0; i < abc.length(); j++) {
            if (fileString[i] == abc[j]) {

            }
        }
    }


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