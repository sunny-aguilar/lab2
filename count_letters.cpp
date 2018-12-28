/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     Write a short description
**                  of your code
**                  here.
*********************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using std::cout;
using std::ifstream;
using std::string;
using std::endl;

void count_letters(ifstream &inFile, int*) {
    char alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};
    char letter;
    char letterArr[100];
    char stringRead;
    char ltrVal;
    int counter = 0;

    while (inFile >> letter) {
        letterArr[counter] = letter;
        cout << letter << endl;
        counter++;
    }
    cout << letterArr[0] << endl;
    cout << letterArr[1] << endl;
    cout << letterArr[2] << endl;
}