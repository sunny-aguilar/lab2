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
    string fileName;                                    // variable to save input file name
    int *frequencyPtr = new int[26];                    // create a pointer to an int array
    
    ifstream inFile;                                    // create input file object
    cout << "Enter a file name:\n";                     // message prompt for user

    do {                                                // loop - ask user for file name if incorrect
        cin >> fileName;                                // input_fun.txt
        inFile.open("input_fun.txt");                   // input file data from input_fun.txt
        if (inFile.fail())
            cout << "File not found! "                  // request file name
                 << "Enter a file name:\n";
    } while (inFile.fail());

    cout << "Input file successfully opened\n";         // confirm input file opened
    count_letters(inFile, frequencyPtr);                // read in file and calculate character frequency in file
    inFile.close();                                     // close input file


    delete [] frequencyPtr;                             // delete memory
    frequencyPtr = nullptr;                             // remove dangling pointer

    return 0;
}
