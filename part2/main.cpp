/******************************************************************************
 * File:        main.cpp
 * Author:      Luke Teran
 * Date:        24 April 2024
 * Description: Integrates header.h, functions.cpp for desired output
 ******************************************************************************/

// Include necessary headers here
// #include "functions.cpp"
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




/*
Image Processing: 
Load the provided bunny image for processing.  
a. Provide the median pixel brightness of the Red channel. 
RBG_Red.MedianPixelBrightness = 0.753


b. Provide a histogram for the Blue channel with appropriate axis labels. 
c. Perform the following manipulations in series: 
1 https://en.wikipedia.org/wiki/Conjunction_(astronomy)#/media/File:Planetary_Conjunction_over_Paranal.jpg
7 
Intelligent Systems, Lynntech Inc., 2024 
i. Rotate the Green channel by 90 degrees CW. Leave Red and Blue as they are. 
ii. Apply a gradient filter to the rotated Green channel to highlight edges. If your chosen 
gradient method produces negative values, take the absolute value. Normalize 0 to 255 
iii. Apply a blurring filter to the gradient filtered Green channel using a kernel size of 21. 
iv. Mask the Red channel so that all values > 230 are set to 0 
v. Combine the modified Red and Green channels along with the Blue channel into a 
greyscale image while weighting the Green channel twice as much as the other two. 
vi. Rescale size to 150% and crop out the left half (keeping the right).  
vii. Save the final image as a grayscale “[lastname]_bunny_out.png”. You will send this out 
along with your compiled results.
*/