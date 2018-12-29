/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     Write a short description
**                  of your code
**                  here.
*********************************************************************/
#include <fstream>
#include <iostream>
using std::ofstream;
using std::cout;

void output_letters(ofstream &outFile, int *intArr) {
    // to test values in array pointer
    cout << "Array received in output_Letters Function\n";
    for (int x = 0; x < 26; x++) {
        cout << intArr[x] << " ";
    }





}