/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     This program reads a file filled with letters and
**                  counts the frequencies in the file, and writes the
**                  results to a new file.
*********************************************************************/
#include "count_letters.hpp"
#include "output_letters.hpp"

int main() {
    string fileName;                                    // holds input file name
    string outFileName;                                 // holds output file names
    int *frequencyPtr = new int[26];                    // allocate int array

    ifstream inFile;                                    // create input file object
    cout << "Enter a file name (i.e. file_fun.txt):\n"; // message prompt for user

    do {                                                // loop - ask user for file name if incorrect
        cin >> fileName;                                // input_fun.txt
        inFile.open(fileName);                          // input file data from input_fun.txt
        if (inFile.fail())
            cout << "File not found! "                  // request file name if not found
                 << "Enter a file name:\n";
    } while (inFile.fail());                            // if file not found, repeat loop

    cout << "Input file successfully opened\n";         // confirm input file opened

    while (!inFile.eof()) {
        count_letters(inFile, frequencyPtr);            // call count_Letters function

        // create/overwrite output file object
        ofstream outFile;
        // call output_letters function to display results
        output_letters(outFile, frequencyPtr);

    }

    // close input file
    inFile.close();

    // deallocate heap memory
    delete [] frequencyPtr;

    // remove dangling pointer
    frequencyPtr = nullptr;

    return 0;
}
