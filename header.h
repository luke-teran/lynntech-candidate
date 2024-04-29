/******************************************************************************
 * File:        header.h
 * Author:      Luke Teran
 * Date:        24 April 2024
 * Description: Includes necessary headers, defines global constants and macros, prototypes functions, and declares ArrayData class
 ******************************************************************************/

// Include necessary headers here
#ifndef HEADER_H
#define HEADER_H
#include <cstdlib>
#include <random>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Define any global constants or macros here
// extern const int SAMPLE_SIZE;
const int SAMPLE_SIZE = 100;
const int RANDOM_ARRAY_SIZE = 16;
// Declare any global variables here
// Define any global functions or classes here
signed int fn_a(int a, int b);
void fn_b(float mean, float std_dev, const int*);
float std_dev_calc(float sample_mean, float sample[], const int* SAMPLE_SIZE);
void console_border();

// Implementation of functions or classes, if applicable
class ArrayData {
private:
    std::vector<int> data;
    int min_value,
        max_value;
public:
    void random_array_generator(const int &RANDOM_ARRAY_SIZE);
    void MinMaxUpdate();
    void printValues();
    void printMinMax();
};

#endif