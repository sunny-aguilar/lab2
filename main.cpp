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
using std::endl;
using std::vector;
using std::string;
using std::stringstream;


int main() {
    // see example program 12-12 pg. 837 for an example that uses a
    // pointer to count the number of times a specific character
    // appears in a C-string
    string fileName;
    vector<int> matrix;

    // ask user to enter a file name
    cout << "Enter a file name:\n";
    cin >> fileName;

    // input file data from file_fun.txt
    ofstream inputFile("file_fun.txt", std::ios::app);
    ifstream ifs("input_fun.txt");



//    inputFile.open("file_fun.txt");
    inputFile << "Hello file!" << endl;

    // create output file output_letters.txt

    stringstream ss;
    string out;

    ss << 11 << " Sandro Aguilar";
    getline(ss, out);
    cout << out;



    return 0;
}
