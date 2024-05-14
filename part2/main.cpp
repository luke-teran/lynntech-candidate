/******************************************************************************
 * File:        main.cpp
 * Author:      Luke Teran
 * Date:        24 April 2024
 * Description: Integrates header.h, functions.cpp for desired output
 ******************************************************************************/
// Compile with g:
// $ g++ main.cpp
// Run with:
// $ ./a.out

// Include necessary headers here
#include "functions.cpp"
#include "header.h"

// Part2 Task 1A:
//     Write a function which generates a random alphanumeric palindrome of user
//     input length. Provide your script and an example output.
// Part2 Task1B:
// . Write a script which generates a list of outcomes from rolling a pair of
// dice. The pair of dice is rolled 1000 times. Your script should also
// calculate and print out the average and standard deviation of the sums of the
// rolled pairs. Provide your script and its output.

int main() {
  cout << "1. Coding with Randomness" << endl;
  Palindrome userPalindrome;
  userPalindrome.random_AlphaNum();
  userPalindrome.print();
  
  diceExperiment diceTest;
  diceTest.print();
  
  cout << "2. Data Structure and Algorithm Coding" << endl;
  task2helper();  
  task2helper();  
}

// Geo‐spatial Analytics and Remote Sensing:
/*
Standing in Lynntech’s backyard (30.615979, ‐96.290631), you can see a radio antenna in the 
distance. As of 2024, there’s a Masfajitas restaurant a mile north of us with Highway 6 in front and a 
residential area and power station behind it. Next to the power station is the antenna we can see. 
To the nearest degree, give the heading towards it from our location. How could you estimate (or 
investigate) its height?
*/

/*
Assuming Masfajitas is exactly 1mi or 1609meters north of Lynntech (30.615979, ‐96.290631):
Masfajitas is 
Measure distance to Masfajitas
Masfajitas = Adjacent
Measure angle between Masfajitas and Antenna from Lynntech's Backyard
sin(Angle) * Adjacent = Antenna offset 
*/