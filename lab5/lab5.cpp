// This source code file demonstrates importing the Fruit Class and calling the to-string method.
// Prints out a summary of the food type data.

#include "Fruit.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){ 
    std::cout << "Driver for Fruit.h files in lab 5." << std::endl;
    Fruit apple = Fruit("Apple, red delicious, with skin, raw", 100, 62, 14.8, .21, .21);
    Fruit banana = Fruit("Banana, overripe, raw", 100, 85, 20.1, .22, .73);
    Fruit kiwi = Fruit("Kiwi", 100, 58, .14, .44, 1.06);
    apple.to_string();
    banana.to_string();
    kiwi.to_string();

    return 0;
}
