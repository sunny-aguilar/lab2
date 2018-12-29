/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     Write a short description
**                  of your code
**                  here.
*********************************************************************/
#include <fstream>
#include <iostream>
#include <string>
using std::ofstream;
using std::string;
using std::cout;
using std::endl;

void output_letters(ofstream &outFile, int *intArr) {
    // string holding alphabet
    string abc = "abcdefghijklmnopqrstuvwxyz";

    // output alphabet with character count
    for (int i = 0; i < 26; i++) {
        outFile << abc[i] << ": " << intArr[i] << " \n";
    }
}