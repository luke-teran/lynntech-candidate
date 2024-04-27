#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <sstream>
#include "functions.h"
using namespace std;

int main() {
    cout << "Luke Teran" << endl;
    int a, b;
    cout << "input a: ";
    cin >> a;
    cout << "input b: ";
    cin >> b;
    cout << "function a result:" << endl << "\t" << fn_a(a,b) << endl;
    return 0;
}
