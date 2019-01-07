/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     This program reads a file filled with letters and
**                  counts the frequencies in the file, and writes the
**                  results to a new file.
*********************************************************************/
#include "count_letters.hpp"
#include <iostream>
#include <fstream>
#include <string>
using std::cin;
using std::cout;
using std::ifstream;
using std::endl;
using std::string;

int main() {
    string fileName;                                    // variable to save input file name
    int *frequencyPtr = new int[26];                    // create a pointer to an int array

    ifstream inFile;                                    // create input file object
    cout << "Enter a file name:\n";                     // message prompt for user

    do {                                                // loop - ask user for file name if incorrect
        cin >> fileName;                                // input_fun.txt
        inFile.open(fileName);                   // input file data from input_fun.txt
        if (inFile.fail())
            cout << "File not found! "                  // request file name if not found
                 << "Enter a file name:\n";
    } while (inFile.fail());                            // if file not found, repeat loop

    cout << "Input file successfully opened\n";         // confirm input file opened
    count_letters(inFile, frequencyPtr);                // call count_Letters function
    inFile.close();                                     // close input file

    delete [] frequencyPtr;                             // delete memory
    frequencyPtr = nullptr;                             // remove dangling pointer

    return 0;
}
