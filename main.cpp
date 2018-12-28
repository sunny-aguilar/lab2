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
    int *frequencyPtr = nullptr;

    // loop for error
    ifstream inFile;                                    // create input file object
    do {
        cout << "Enter a file name:\n";                 // request file name
        cin >> fileName;                                // s/b input_fun.txt
        inFile.open(fileName);                          // input file data from input_fun.txt
    } while (inFile.fail());
    count_letters(inFile, frequencyPtr);                // read in file and calculate character frequency in file
    inFile.close();                                     // close input file

    // output character frequency count to file
    cout << "Enter a file name to output results\n";    // request file name
    cin >> fileName;                                    // get file name from user
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
