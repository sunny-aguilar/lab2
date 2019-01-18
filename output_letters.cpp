/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     This function receives two parameters which are an
**                  ofstream object and and a pointer to an int array.
**                  The frequencies contained from the pointer to the
**                  array are saved alphabetically and saved to a file
**                  for each paragraph.
*********************************************************************/
#include "output_letters.hpp"

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
        outFile << abc[i] << ": " << intArr[i] << " \r\n";
    }

    // close output file
    outFile.close();
}