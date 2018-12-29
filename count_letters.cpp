/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     cout_letters function accepts a reference to a file
**                  object and a pointer to an int array. The function
**                  reads in a file specified by user. For each
**                  paragraph, the function counts the frequency of
**                  each letter and ask the user what filename to
**                  output to. Function output_letters is then called
**                 with output file and pointer to an in array
**                  parameters.
*********************************************************************/
#include "output_letters.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::ifstream;
using std::string;
using std::endl;

void count_letters(ifstream &inFile, int *intArr) {
    string abc = "abcdefghijklmnopqrstuvwxyz";
    int stringLength = 0;
    string input;
    string fileString;
    string outFileName;
    int counter = 0;

    // loop though the input file contents until EOF
    while (!inFile.eof()) {
        // get a paragraph
        getline(inFile, input);

        // get the sum of total characters in paragraph
        stringLength = input.size();

        // make all characters lowercase
        for (int i = 0; i < stringLength; i++) {
            input[i] = tolower(input[i]);
        }

        // loop through each paragraph, count characters in each, and
        // save the results in the pointer to the int array
        for (int i = 0; i < abc.length(); i++) {
            for (int j = 0; j < stringLength; j++) {
                if (input[j] == abc[i]) {
                    counter++;
                }
            }
            intArr[i] = counter;
            counter = 0;
        }

        // request output file name for each paragraph
        cout << "\nEnter a file name to output results\n";
        cin >> outFileName;

        // create/overwrite output file object
        ofstream outFile(outFileName);

        // call output_letters function to display results
        output_letters(outFile, intArr);

        // close output file
        outFile.close();
    }
}