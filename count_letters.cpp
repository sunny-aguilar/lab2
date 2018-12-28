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
#include <sstream>
#include <cctype>
using std::cout;
using std::ifstream;
using std::string;
using std::endl;
using std::stringstream;

void count_letters(ifstream &inFile, int*) {
    stringstream ss;

    char alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};
    char charsInfile[27];
    char letter;
    string sStream;
    string ssOutput;
    char stringRead;
    char ltrVal;
    int counter = 0;
    int *ptr = nullptr;

    // count total characters read in
    while (inFile >> letter) {
        counter++;
    }
    cout << "Counter is " << counter << endl;
    char letterArr[counter];


    counter = 0;
    while (inFile >> letter) {
        letterArr[counter] = letter;
        cout << letter << " ";
        counter++;
    }
    cout << endl;

    cout << "Letters saved in array\n";
    for (int i = 0; i < 52; i++) {
        cout << letterArr[i] << " ";
    }
    cout << endl;

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