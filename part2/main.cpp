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

// Implementation of functions or classes, if applicable

// Part2 Task 1A:
//     Write a function which generates a random alphanumeric palindrome of user
//     input length. Provide your script and an example output.
// Part2 Task1B:
// . Write a script which generates a list of outcomes from rolling a pair of
// dice. The pair of dice is rolled 1000 times. Your script should also
// calculate and print out the average and standard deviation of the sums of the
// rolled pairs. Provide your script and its output.

int main() {

  // 1A
  Palindrome userPalindrome;
  userPalindrome.random_AlphaNum();
  userPalindrome.print();
  // 1B
  // Generate list of outcomes form rolling 2 dice 1000 times
  // Print average and standard deviation of the sums of the dice. (average
  // should be 7, std deviation 2-4?)
  //
  // 2d vector
  // Roll #:  [1, ..., 1000]
  // Value1:  {[x, ..., y]
  // Value2:  [a, ..., b]}

  

  diceExperiment diceTest;
  diceTest.print();
  
}

