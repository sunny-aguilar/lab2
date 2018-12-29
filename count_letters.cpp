/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     Write a short description
**                  of your code
**                  here.
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

    cout << "Values read in file:\n";
    while (!inFile.eof()) {
        getline(inFile, input);
        cout << input << endl;

        cout << "String length is " << input.size();
        stringLength = input.size();

        // make all characters lowercase
        for (int x = 0; x < stringLength; x++) {
            input[x] = tolower(input[x]);
        }
        cout << endl;
        cout << "Show lower case letters in string \n" << input << endl;
        cout << endl;

        for (int x = 0; x < 26; x++) {
            intArr[x] = 0;
        }
        cout << endl;

        for (int i = 0; i < abc.length(); i++) {
            for (int j = 0; j < stringLength; j++) {
                if (input[j] == abc[i]) {
                    counter++;
                }
            }
            intArr[i] = counter;
        counter = 0;
        }


        cout << "\nEnter a file name to output results\n";
        cin >> outFileName;
        ofstream outFile(outFileName);

        // call output_letters.cpp function
        output_letters(outFile, intArr);
    }
}