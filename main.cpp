/******************************************************************************
 * File:        main.cpp
 * Author:      Luke Teran
 * Date:        24 April 2024
 * Description: [Brief description of the file's purpose and contents]
 ******************************************************************************/

// Include necessary headers here
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <sstream>
#include "header.h"
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>
// Define any global constants or macros here
using namespace std;
const int RANDOM_ARRAY_SIZE = 16;

// Declare any global variables here

// Define any global functions or classes here

// Implementation of functions or classes, if applicable

int main() {
    cout << "Author: luketeran@tamu.edu" << endl << endl;
    // fn_a_prep
    int a, b;
    cout << "input a: ";
    cin >> a;
    cout << "input b: ";
    cin >> b;
    // 
    cout << "function a output:" << "\t" << fn_a(a,b) << endl;
    
    // fn_b_prep
    const float MEAN    = 3.5,
                STD_DEV = 0.7;
    //
    fn_b(MEAN,STD_DEV,&SAMPLE_SIZE);

    // 
    ArrayData randomArray;
    randomArray.random_array_generator(RANDOM_ARRAY_SIZE);
    randomArray.MinMaxUpdate();
    randomArray.printValues();
    randomArray.printMinMax();
    

    return 0;
}
