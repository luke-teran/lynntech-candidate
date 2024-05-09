/******************************************************************************
 * File:        functions.cpp
 * Author:      Luke Teran
 * Date:        24 April 2024
 * Description: Implementation of header.h fn prototypes. Written to meet
 * requirements of "Candidate Technical Assessment 2024.pdf".
 ******************************************************************************/
// Include necessary headers here
#include "header.h"
// Define any global constants or macros here
extern const int SAMPLE_SIZE;
// Implementation of functions or classes, if applicable

int Palindrome::getPalindromeLength() {
  cout << "Input desired palindrome length: ";
  cin >> inputLength;
  return inputLength;
};

void Palindrome::random_array_generator() {
  srand(time(NULL));
  for (int random_array_index = 0; random_array_index < inputLength + 1;
       random_array_index++) {
    random_array.push_back(rand());
  }
}

void Palindrome::random_AlphaNum() {
  text.clear();
  getPalindromeLength();
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distrib(1, 3);
  std::vector<char> randomArray;

  char choice;
  for (int i = 0; i < inputLength; i++) {
    choice = distrib(gen);
    switch (choice) {
    case 1:
      randomArray.push_back(uniform_int_distribution<int>(48, 57)(gen));
      break;
    case 2:
      randomArray.push_back(uniform_int_distribution<int>(65, 90)(gen));
      break;
    case 3:
      randomArray.push_back(uniform_int_distribution<int>(97, 122)(gen));
      break;
    }
  }
  // Debug: output should be ABCDCBA
  // randomArray = {'A', 'B', 'C', 'D'};
  text = randomArray;
  for (int i = inputLength - 2; i >= 0; i--) {
    // right to left iteration of vector
    text.push_back(randomArray.at(i));
  }
}
void Palindrome::print() {
  cout << "Desired length: " << inputLength << endl
       << "Palindrome of length: " << text.size() << endl;
  // cout << endl << "randomArray:" << endl;
  // for (int i = 0; i < inputLength; i++) {
  //   cout << randomArray.at(i) << ' ';
  // }
  // cout << endl;
  cout << endl << "text:" << endl;
  for (int i = 0; i < text.size(); i++) {
    cout << text.at(i) << ' ';
  }
  cout << endl;
}
