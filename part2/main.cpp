/******************************************************************************
 * File:        main.cpp
 * Author:      Luke Teran
 * Date:        24 April 2024
 * Description: Integrates header.h, functions.cpp for desired output
 ******************************************************************************/

// Include necessary headers here
#include "functions.cpp"
#include "header.h"
// Define any global constants or macros here
extern const int RANDOM_ARRAY_SIZE;
// Implementation of functions or classes, if applicable

// Write a function which generates a random alphanumeric palindrome of user
// input length. Provide your script and an example output.

int main() {
  Palindrome userPalindrome;
  userPalindrome.random_AlphaNum();
  userPalindrome.print();
}