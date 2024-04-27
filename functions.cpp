/******************************************************************************
 * File:        functions.cpp
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
#include <random>
#include <cmath>
#include <vector>
#include <algorithm>
// Define any global constants or macros here
using namespace std;
const int   SAMPLE_SIZE = 100;//,
            // RANDOM_ARRAY_SIZE = 16;
// Declare any global variables here

// Define any global functions or classes here

// Implementation of functions or classes, if applicable




signed int fn_a(int a, int b) {
    int c = a-b;
    if(c>0) {
        return 1;
    } else if(c<0) {
        return -1;
    } return 0;
}

void fn_b(float mean, float STD_DEV, const int*) {
    float sample_mean = 0, sample_std_dev, sample[SAMPLE_SIZE];
    
    std::random_device rd{};
    std::mt19937 gen{rd()};
    std::normal_distribution<float> d(mean, STD_DEV);

    for (int sample_index = 0; sample_index < SAMPLE_SIZE; sample_index++) {
        sample[sample_index] = d(gen);
        // cout << "[" << sample_index+1 << "]: " << sample[sample_index] << endl;
        sample_mean += sample[sample_index];
    }
    sample_mean /= SAMPLE_SIZE;
    sample_std_dev = std_dev_calc(sample_mean, sample, &SAMPLE_SIZE);
    

    cout << "Sample Mean:"  << "\t" << "\t"  << sample_mean << std::endl
         << "Standard Deviation:"   << "\t"  << sample_std_dev << std::endl;
}

float std_dev_calc(float sample_mean, float sample[], const int* SAMPLE_SIZE) {
    float numerator = 0, std_dev;
    for (int sample_index = 0; sample_index < *SAMPLE_SIZE; sample_index++) {
        numerator += pow((sample[sample_index] - sample_mean),2);
    }
    std_dev = sqrt(numerator/(*SAMPLE_SIZE-1));
    return std_dev;
}

// std::vector<int> ArrayData::random_array_generator(const int &RANDOM_ARRAY_SIZE) {
void ArrayData::random_array_generator(const int &RANDOM_ARRAY_SIZE) {
    data.clear();
    srand(time(NULL));
    std::vector<int> random_array;
    for(int random_array_index = 0; random_array_index < RANDOM_ARRAY_SIZE; random_array_index++) {
        random_array.push_back(rand());
        // cout << "[" << random_array_index+1 << "]: " << random_array.at(random_array_index) << endl;
    }
    data = random_array;
}

void ArrayData::MinMaxUpdate() {
    min_value = *std::min_element(data.begin(),data.end());
    max_value = *std::max_element(data.begin(),data.end());
}


void ArrayData::printValues() {
    for(int array_index = 0; array_index < data.size(); array_index++) {
        cout << "[" << array_index+1 << "]:" << "\t" << data.at(array_index) << endl;
    }
};
void ArrayData::printMinMax() {
    cout << "Maximum element:" << "\t" << max_value << endl;
    cout << "Minimum element:" << "\t" << min_value << endl;
};