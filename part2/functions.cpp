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
}

void Palindrome::random_AlphaNum() {
  text.clear();
  getPalindromeLength();
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distrib(1, 3);
  // Declared in header.h for scope purposes in Palindrome::print().
  // std::vector<char> randomArray;

  char inputchoice;
  int halfPalindromeSize;
  if (inputLength % 2) {
    halfPalindromeSize = inputLength / 2 + 1;
  } else {
    halfPalindromeSize = inputLength / 2;
  }
  for (int i = 0; i < halfPalindromeSize; i++) {
    inputchoice = distrib(gen);
    switch (inputchoice) {
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
  for (unsigned int i = 0; i < randomArray.size(); i++) {
    cout << randomArray.at(i) << ' ';
  }

  cout << endl << "palindrome of random alphanumeric sequence:" << endl;
  for (unsigned int i = 0; i < text.size(); i++) {
    cout << text.at(i) << ' ';
  }
  cout << endl;
}

int RandomIntegerGenerator_Bounded(int min, int max) {
  random_device rd; // set seed
  mt19937 gen(rd());
  uniform_int_distribution<> distrib(min, max);
  return distrib(gen);
}

diceExperiment::diceExperiment() {
  const int DICE_MINIMUM = 1, DICE_MAXIMUM = 6;
  int numberofDice, numberofRolls;
  cout << "Number of dice: ";
  cin >> numberofDice;
  cout << "Number of rolls (samples): ";
  cin >> numberofRolls;

  vector<vector<int>> diceRollEvents;
  diceRollEvents.resize(numberofRolls);
  for (int rollIndex = 0; rollIndex < numberofRolls; rollIndex++) {
    for(int j = 0; j < numberofDice; j++) {
      diceRollEvents.at(rollIndex).push_back(RandomIntegerGenerator_Bounded(DICE_MINIMUM,DICE_MAXIMUM));
    }
  }
  sampleSumVector = sumVector(diceRollEvents);
  rollAverage = averageofVector(sampleSumVector);
  stdDevRolls = std_dev_of_vector(sampleSumVector, rollAverage);
}

vector<int> diceExperiment::sumVector(vector<vector<int>> samplesVector) {
  vector<int> sampleSumVector;
  sampleSumVector.clear();

  try {
    for (unsigned int i = 0; i < samplesVector.size(); i++) {
      sampleSumVector.push_back(0);
      for (unsigned int j = 0; j < ((samplesVector.at(i)).size()); j++) {
        sampleSumVector.at(i) += samplesVector.at(i).at(j);
      }
    }

  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n' << "TRYCATCH\n";
  }
  return sampleSumVector;
}

double diceExperiment::averageofVector(vector<int> sampleSumVector) {
  double average = 0;
  for (unsigned int i = 0; i < sampleSumVector.size(); i++) {
    average += (sampleSumVector.at(i));
  }
  average /= sampleSumVector.size();
  return average;
}

double diceExperiment::std_dev_of_vector(vector <int> samples, double mean) {
  double sampleVarianceNumerator = 0, std_dev;

  for (unsigned int sample_index = 0; sample_index < samples.size(); sample_index++) {
    sampleVarianceNumerator += pow((samples.at(sample_index) - mean),2);
  }
  std_dev = sqrt(sampleVarianceNumerator/(samples.size()-1));
  return std_dev;
}

void diceExperiment::print(){
  cout << "Roll #\t| Sum" << endl;;
  for(unsigned int rollIndex = 0; rollIndex < sampleSumVector.size(); rollIndex++) {
    cout << (rollIndex+1) << ":\tΣ = " << sampleSumVector.at(rollIndex) << endl;
  }
  cout << "Average of Rolls: " << rollAverage << endl;
  cout << "Standard Deviation of Rolls: " << stdDevRolls << endl;
}

vector<int> randomIntegerArrayGenerator(int randomArraySize, int random_min, int random_max) {
  vector<int> randomArray;
  randomArray.clear();
  
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distrib(random_min,random_max);

  for (int randomArrayIndex = 0; randomArrayIndex < randomArraySize; randomArrayIndex++) {
    randomArray.push_back(distrib(gen));
  }
  return randomArray;
}

int binarySearch(vector<int> sortedIntegerArray, int key) {
  int lowerBound = 0;
  int upperBound = sortedIntegerArray.size();

  while(lowerBound <= upperBound) {
    int median = lowerBound + (upperBound - lowerBound) / 2;

    if(sortedIntegerArray.at(median) == key) {
      return median;
    }
    if(sortedIntegerArray.at(median) < key) {
      lowerBound = median + 1;
    }
    else {
      upperBound = median - 1;
    }
  }
  // Not found returns -1, an invalid index.
  return -1;
}


void testFn_binarySearch(vector<int> sortedIntegerArray) {
  int numberoftests, secretValue, secretValueIndex;
  char inputchoice;
  cout << "Input Number of tests: ";
  cin >> numberoftests;

  while((inputchoice != 'Y') & (inputchoice != 'y') & (inputchoice != 'N') & (inputchoice != 'n')) {
    cout << "Enter own target value(s)? Y/N: ";
    cin >> inputchoice;
    cout << endl;
  }
  for(int i = 0; i < numberoftests; i++) {
    switch(inputchoice) {
      case 'Y':
      case 'y':
        cout << "Enter target integer to search for: ";
        while(!(cin >> secretValue)){
          cout << "Invalid input. Must be a 32-bit integer." << endl;
          cin.clear();
          cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          cout << "Enter target integer to search for: ";
        }
        break;
      case 'N':
      case 'n':
        // Random Target chosen by random index between 0 and max index of random integer array using existing fn
        // randomIntegerArrayGenerator() for array of size 1 and accessing front element
        secretValue = sortedIntegerArray.at(randomIntegerArrayGenerator(1, 0, (sortedIntegerArray.size()-1)).front());
        break;
    }
    secretValueIndex = binarySearch(sortedIntegerArray, secretValue);
    if(secretValueIndex != -1) {
      cout << "Found " << secretValue << " at index: " << secretValueIndex << endl;
    } else {
      cout << "Could not find " << secretValue << " in array." << endl;
    }
  }  
}

void task2helper() {
  int randomArraySizeBuff;
  cout << "Input Random Array Size: ";
  cin >> randomArraySizeBuff;
  vector<int> randomIntegerArray = randomIntegerArrayGenerator(randomArraySizeBuff,INT32_MIN,INT32_MAX);
  sort(randomIntegerArray.begin(),randomIntegerArray.end());  

  cout << "Random Integer Array:" << endl << '[';
  for(int i = 0; i < randomArraySizeBuff-1; i++){
    cout << randomIntegerArray.at(i) << ",\t";
  }
  cout << randomIntegerArray.back() << ']' << endl;

  testFn_binarySearch(randomIntegerArray);
}