/******************************************************************************
 * File:        header.h
 * Author:      Luke Teran
 * Date:        24 April 2024
 * Description: Includes necessary headers, defines global constants and macros,
 *prototypes functions, and declares ArrayData class
 ******************************************************************************/

// Include necessary headers here
#ifndef HEADER_H
#define HEADER_H
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

// Define any global constants or macros here

// Define any global functions or classes here

// Implementation of functions or classes, if applicable
class Palindrome {
private:
  std::vector<int> random_array;
  int inputLength;
  int getPalindromeLength();
  // Placed here to simplify scope issues for printing in print member function.
  // Not necessary to retain original random alphanumeric array.
  std::vector<char> randomArray;

public:
  std::vector<char> text;
  void random_AlphaNum();
  void print();
};

int rollDice();
double averageofVector(vector<int>);
double stdDevSumVectorofVector(vector<int>);
#endif