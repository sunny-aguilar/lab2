/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     Write a short description
**                  of your code
**                  here.
**
*********************************************************************/
#include "count_letters.hpp"
#include "output_letters.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>  // characters
using std::cin;
using std::cout;
using std::ifstream;
using std::endl;
using std::string;


int main() {
    string fileName;
    int *frequencyPtr = new int[26];

    // loop for error
    ifstream inFile;                                    // create input file object
    cout << "Enter a file name:\n";

    do {
//        cin >> fileName;                                // s/b input_fun.txt
        inFile.open("input_fun.txt");                   // input file data from input_fun.txt
        if (inFile.fail())
            cout << "File not found! "                  // request file name
                 << "Enter a file name:\n";
    } while (inFile.fail());

    cout << "Input file successfully opened\n";         // confirm input file opened
    count_letters(inFile, frequencyPtr);                // read in file and calculate character frequency in file
    inFile.close();                                     // close input file


    delete [] frequencyPtr;
    frequencyPtr = nullptr;

    return 0;
}
