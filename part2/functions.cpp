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

// Implementation of functions or classes, if applicable

int Palindrome::getPalindromeLength() {
  cout << "Input desired random palindrome length: ";
  cin >> inputLength;
  return inputLength;
};

void Palindrome::random_AlphaNum() {
  text.clear();
  getPalindromeLength();
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distrib(1, 3);
  // Declared in header.h for scope purposes in Palindrome::print().
  // std::vector<char> randomArray;

  char choice;
  int halfPalindromeSize;
  if (inputLength % 2) {
    halfPalindromeSize = inputLength / 2 + 1;
  } else {
    halfPalindromeSize = inputLength / 2;
  }
  for (int i = 0; i < halfPalindromeSize; i++) {
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
  text = randomArray;
  for (int i = inputLength / 2 - 1; i >= 0; i--) {
    // right to left iteration of vector
    text.push_back(randomArray.at(i));
  }
}
void Palindrome::print() {
  cout << "random alphanumeric sequence:" << endl;
  for (int i = 0; i < randomArray.size(); i++) {
    cout << randomArray.at(i) << ' ';
  }

  cout << endl << "palindrome of random alphanumeric sequence:" << endl;
  for (int i = 0; i < text.size(); i++) {
    cout << text.at(i) << ' ';
  }
  cout << endl;
}

int rollDice() {
  random_device rd; // set seed
  mt19937 gen(rd());
  uniform_int_distribution<> distrib(1, 6);
  return distrib(gen);
}

vector<int> sumVectorofVector(vector<vector<int>> parentVector) {
  vector<int> sumVector;
  sumVector.clear();
  for (int i = 0; i < parentVector.size(); i++) {
    for (int j = 0; j < ((parentVector.at(i)).size()); j++) {
      sumVector.at(i) += ((parentVector.at(i)).at(j));
    }
  }
  return sumVector;
}

double averageofVector(vector<vector<int>> parentVector) {
  double average;
  for (int i = 0; i < parentVector.size(); i++) {
    average += double(parentVector.at(i));
  }
  average /= parentVector.size();
}
double stdDevSumVectorofVector(vector<vector<int>>);
