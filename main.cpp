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
    // create variables
    string fileName;                            // holds input file name
    string outFileName;                         // holds output file names
    int *frequencyPtr = new int[26];            // allocate int array

    // create input file object
    ifstream inFile;
    cout << "Enter a file name (i.e. file_fun.txt):\n";

    // loop - ask user for file name if incorrect
    do {
        cin >> fileName;                        // file_fun.txt
        inFile.open(fileName);                  // input file data from file_fun.txt
        if (inFile.fail())
            cout << "File not found! "          // request file name if not found
                 << "Enter a file name:\n";
    } while (inFile.fail());                    // if file not found, repeat loop

    // confirm input file opened
    cout << "Input file successfully opened\n";

    // call functions until end of file is reached
    while (!inFile.eof()) {
        // call count_Letters function
        count_letters(inFile, frequencyPtr);

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
