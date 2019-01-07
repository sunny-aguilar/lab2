/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     This function receives two parameters which are an
 *                  ofstream object and and a pointer to an int array.
**                  The frequencies contained in the pointer to the
**                  array are saved alphabetically.
*********************************************************************/
#include <fstream>
#include <iostream>
#include <string>
using std::ofstream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void output_letters(ofstream &outFile, int *intArr) {
    // string holding alphabet
    string abc = "abcdefghijklmnopqrstuvwxyz";
    string outFileName;
    static int count = 1;

    // request output file name for each paragraph
    cout << "\nEnter a file name to output results for file #"
         << count << endl;
    cin >> outFileName;
    count++;
    // create/overwrite output file object
    outFile.open(outFileName);

    // output alphabet with character count and format it
    for (int i = 0; i < 26; i++) {
        outFile << abc[i] << ": " << intArr[i] << " \n\n";
    }

    // close output file
    outFile.close();
}