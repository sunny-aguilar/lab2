/*********************************************************************
** Author:          Sandro Aguilar
** Date:            Jan 2019
** Description:     This function receives two parameters which are an
 *                  ofstream object and and a pointer to an int array.
**                  The frequencies contained in the pointer to the
**                  array are saved alphabetically.
*********************************************************************/
#ifndef OUTPUT_LETTERS_HPP
#define OUTPUT_LETTERS_HPP

#include <iostream>
#include <fstream>
#include <string>
using std::ofstream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

// function prototype
void output_letters(ofstream &, int*);

#endif
