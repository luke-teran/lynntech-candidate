/******************************************************************************
 * File:        main.cpp
 * Author:      Luke Teran
 * Date:        24 April 2024
 * Description: Integrates header.h, functions.cpp for desired output
 ******************************************************************************/

// Include necessary headers here
#include "header.h"
// Define any global constants or macros here
extern const int RANDOM_ARRAY_SIZE;
// Declare any global variables here
// Define any global functions or classes here
// Implementation of functions or classes, if applicable

int main() {
    cout << "Author: luketeran@tamu.edu" << endl;
    // fn_a
    console_border();
    int a, b;
    cout << "input a: ";
    cin >> a;
    cout << "input b: ";
    cin >> b;
    cout << "function a output:" << "\t" << fn_a(a,b) << endl;
    
    // fn_b
    console_border();
    const float MEAN    = 3.5,
                STD_DEV = 0.7;
    fn_b(MEAN,STD_DEV,&SAMPLE_SIZE);

    // fn_c
    console_border();
    ArrayData randomArray;
    randomArray.random_array_generator(RANDOM_ARRAY_SIZE);
    randomArray.MinMaxUpdate();
    randomArray.printValues();
    randomArray.printMinMax();
    
    return 0;
}
