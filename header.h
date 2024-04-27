/******************************************************************************
 * File:        header.h
 * Author:      Luke Teran
 * Date:        24 April 2024
 * Description: [Brief description of the file's purpose and contents]
 ******************************************************************************/

// Include necessary headers here
#ifndef HEADER_H
#define HEADER_H
#include <vector>
// Define any global constants or macros here
extern const int SAMPLE_SIZE;

// Declare any global variables here

// Define any global functions or classes here
signed int fn_a(int a, int b);
void fn_b(float mean, float std_dev, const int*);
float std_dev_calc(float sample_mean, float sample[], const int* SAMPLE_SIZE);

class ArrayData {
private:
    std::vector<int> data;
    int min_value,
        max_value;
public:
    // std::vector<int> random_array_generator(const int &RANDOM_ARRAY_SIZE);
    void random_array_generator(const int &RANDOM_ARRAY_SIZE);
    void MinMaxUpdate();
    void printValues();
    void printMinMax();
};
// Implementation of functions or classes, if applicable
#endif

