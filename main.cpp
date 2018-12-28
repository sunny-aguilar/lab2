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

    // ask user to enter a file name
    cout << "Enter a file name:\n";
    cin >> fileName;                                    // s/b input_fun.txt

    // input file data from file_fun.txt
    ifstream inFile("input_fun.txt");
    ofstream outFile("output_fun.txt");                 // output files are auto created/ overwritten

    // read in file and calculate character frequency in file
    count_letters(inFile, frequencyPtr);

    // output character frequency count to file
    output_letters(outFile, frequencyPtr);


//    stringstream ss;
//    string out;
//
//    ss << 11 << " Sandro Aguilar";
//    getline(ss, out);
//    cout << out;

    return 0;
}
