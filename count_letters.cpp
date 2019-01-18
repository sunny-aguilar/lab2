/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     count_letters function accepts a reference to a file
**                  object and a pointer to an int array. The function
**                  reads in a file specified by user. For each
**                  paragraph, the function counts the frequency of
**                  each letter and ask the user what filename to
**                  output to. Function output_letters is then called
**                  with output file and pointer to an in array
**                  parameters.
*********************************************************************/
#include "count_letters.hpp"

void count_letters(ifstream &inFile, int *intArr) {
    // create variables
    string abc = "abcdefghijklmnopqrstuvwxyz";
    int stringLength = 0;
    string input;
    string fileString;
    string outFileName;
    int counter = 0;

    // get a paragraph
    getline(inFile, input);

    // get the sum of total characters in paragraph
    stringLength = input.size();

    // make all characters in paragraph lowercase
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
        intArr[i] = counter;        // assign counter value in array
        counter = 0;                // reset counter
    }
}