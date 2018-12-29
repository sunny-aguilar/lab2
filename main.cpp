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
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>  // characters
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::fstream;
using std::endl;
using std::vector;
using std::string;
using std::stringstream;


int main() {
    // see example program 12-12 pg. 837 for an example that uses a
    // pointer to count the number of times a specific character
    // appears in a C-string
    string fileName;
    int *frequencyPtr = new int[26];

    // loop for error
    ifstream inFile;                                    // create input file object
    cout << "Enter a file name:\n";
    do {
//        cin >> fileName;                                // s/b input_fun.txt
        inFile.open("input_fun.txt");                          // input file data from input_fun.txt
        if (inFile.fail())
            cout << "File not found! "                  // request file name
                 << "Enter a file name:\n";
    } while (inFile.fail());
    cout << "Input file successfully opened\n";         // confirm input file opened
    count_letters(inFile, frequencyPtr);                // read in file and calculate character frequency in file
    inFile.close();                                     // close input file

    cout << "Frequency pointer array in main\n";
    for (int x = 0; x < 26; x++) {
        cout << frequencyPtr[x] << " ";
    }


    // output character frequency count to file
    cout << "\nEnter a file name to output results\n";    // request file name
//    cin >> fileName;                                    // get file name from user
    ofstream outFile("file_fun.txt");                   // output files are auto created/ overwritten
    output_letters(outFile, frequencyPtr);              // format and output results to a file
    outFile.close();                                    // close output file

//    stringstream ss;
//    string out;
//
//    ss << 11 << " Sandro Aguilar";
//    getline(ss, out);
//    cout << out;

    return 0;
}
