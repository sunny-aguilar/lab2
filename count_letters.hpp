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
#ifndef COUNT_LETTERS_HPP
#define COUNT_LETTERS_HPP

#include <iostream>
using std::ifstream;

// function prototype
void count_letters(ifstream &, int*);

#endif
