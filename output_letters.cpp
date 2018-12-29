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
    string abc = "abcdefghijklmnopqrstuvwxyz";

    for (int x = 0; x < 26; x++) {
        outFile << abc[x] << ": " << intArr[x] << " \n";
    }
}