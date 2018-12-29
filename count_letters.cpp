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

    while (inFile >> input) {
        cout << input;
        fileString += input;
        counter++;
    }
    cout << endl;
    cout << "The string created is\n" <<fileString << endl;
    cout << "\nString length is " << fileString.size();
    stringLength = fileString.size();
    cout << endl;

//    cout << "string created is \n" << fileString << endl;
//    if (fileString[0] == 65) {
//        cout << "If smtmt " << fileString[0] << endl;
//    }
    cout << endl;
//    cout << fileString[1] << endl;
//    cout << fileString[2] << endl;

    ptr = new int[stringLength];
    for (int x = 0; x < stringLength; x++) {
        ptr[x] = 0;
    }
//    cout << endl;
    cout << "Output ptr[x] contents ";
    for (int x = 0; x < stringLength; x++) {
        cout << ptr[x] << " ";
    }
    cout << endl;
//
//    ptr[0] += 2;
//    cout << "Value in ptr array " << ptr[0] << endl;

//    for (int i = 0; i < fileString.length(); i++) {
//        for (int j = 0; j < abc.length(); j++) {
//            if (fileString[i] == abc[j]) {
//                ptr[i] += 1;
//            }
//        }
//    }

//    cout << "\nPrint contents of pointer array\n";
//    for (int z = 0; z < stringLength; z++) {
//        cout << ptr[z] << " ";
//    }
//    cout << endl;



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