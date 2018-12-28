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
    char letterArr[100];
    char stringRead;
    char ltrVal;
    int counter = 0;

    while (inFile >> letter) {
        letterArr[counter] = letter;
        cout << letter << endl;
        counter++;
    }
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
    //     been previously added.
    // 5. output results to file

}