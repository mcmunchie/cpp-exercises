// Driver File for Fruit.h
// Main Driver for Fruit.h in Lab 5
// NOTE: only one main can be defined and ran at once (comment out lab6 to run lab5)

#include "Fruit.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main_(){ 
    std::cout << "Driver for Fruit.h files in lab5." << std::endl;
    Fruit apple = Fruit("Apple, red delicious, with skin, raw", 100, 62, 14.8, .21, .21);
    Fruit banana = Fruit("Banana, overripe, raw", 100, 85, 20.1, .22, .73);
    Fruit kiwi = Fruit("Kiwi", 100, 58, .14, .44, 1.06);
    apple.to_string();
    banana.to_string();
    kiwi.to_string();

    return 0;
}
