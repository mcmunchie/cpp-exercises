// Driver File for Fruit.h in lab 6
// Main Driver for Fruit.h in Lab 6
// NOTE: only one main can be defined and ran at once (comment out lab5 to run lab6)

#include "Fruit.h"
#include <iostream>
#include <string>

#include <iomanip>

#include <vector>
#include <algorithm>
using namespace std;

// Compare Calorie Function - used with Vector Sort
bool CompCal(Fruit & aa, Fruit & bb) { // & serves as pointer reference
    return aa.get_energy_quantity() > bb.get_energy_quantity(); }

// Compare Lipid Function - used with Vector Sort
bool CompFat(Fruit & fa, Fruit & fb) {
    return fa.get_lipids_quantity() > fb.get_lipids_quantity(); }

// Compare Protein Function - used with Vector Sort
bool CompPro(Fruit & pa, Fruit & pb) {
    return pa.get_protein_quantity() > pb.get_protein_quantity(); }

// Compare Carbohydrate Function - used with Vector Sort
bool CompCarb(Fruit & ca, Fruit & cb) {
    return ca.get_carbs_quantity() > cb.get_carbs_quantity(); }

int main() {
    std::cout << "Driver for Fruit.h files in lab6." << std::endl;

    // Create three objects of Class type Fruit
    Fruit apple = Fruit("Apple, red delicious, with skin, raw", 100, 62, 14.8, .21, .21);
    Fruit banana = Fruit("Banana, overripe, raw", 100, 85, 20.1, .22, .73);
    Fruit kiwi = Fruit("Kiwi", 100, 58, .14 , .44, 1.06);
    Fruit grape = Fruit("Grape, raw", 100, 67, 17.2, .35, .63);
    Fruit tomato = Fruit("Tomato, red, ripe, raw", 100, 18, 3.89, .2, .88);
    Fruit pear = Fruit("Pear, raw", 100, 57, 15.2, .14, .36);
    Fruit mango = Fruit("Mango, raw", 100, 60, 15, .38, .82);
    Fruit fig = Fruit("Fig, raw", 100, 74, 19.2, .3, .75);
    Fruit date = Fruit("Date Medjool", 100, 277, 75, .15, 1.81);

    // Find the highest_cal, highest_pro, highest_fat, highest_carb
    int highest_cal = 0;
    float highest_pro = 0.0; float highest_fat = 0.0; float highest_carb = 0.0;
    // Relate the highest_numbers into strings
    string high_cal; string high_pro; string high_fat; string high_carb;

    // Compute nutritional Analysis
    Fruit fruit_basket[] = {apple, banana, kiwi, grape, tomato, pear, mango, fig, date};
    for (int x = 0; x < 9; x++) {
        // determine the highest cal
        if (highest_cal < fruit_basket[x].get_energy_quantity()) {
            highest_cal = fruit_basket[x].get_energy_quantity();
            high_cal = fruit_basket[x].get_fruit_name();
//            cout << "The highest calorie now is " << high_cal << " at " << highest_cal << endl;
        }
        // determine the highest carb
        if (highest_carb < fruit_basket[x].get_carbs_quantity()) {
            highest_carb = fruit_basket[x].get_carbs_quantity();
            high_carb = fruit_basket[x].get_fruit_name();
//            cout << "The highest carb now is " << high_carb << " at " << highest_carb << endl;
        }
        // determine the highest fat
        if (highest_fat < fruit_basket[x].get_lipids_quantity()) {
            highest_fat = fruit_basket[x].get_lipids_quantity();
            high_fat = fruit_basket[x].get_fruit_name();
//            cout << "The highest fat now is " << high_fat << " at " << highest_fat << endl;
        }
        // determine the highest prot
        if (highest_pro < fruit_basket[x].get_protein_quantity()) {
            highest_pro = fruit_basket[x].get_protein_quantity();
            high_pro = fruit_basket[x].get_fruit_name();
//            cout << "The highest protein now is " << high_pro << " at " << highest_pro << endl;
        }
    }
    cout << "The fruit with the highest calorie count is " << high_cal << " at " << highest_cal << endl;
    cout << "The fruit with the highest carb count is " << high_carb << " at " << highest_carb << endl;
    cout << "The fruit with the highest fat count is " << high_fat << " at " << highest_fat << endl;
    cout << "The fruit with the highest protein count is " << high_pro << " at " << highest_pro << endl;

    // sort this array from greatest to lowest
    Fruit fruit_array_sort[] = {apple, banana, kiwi, grape, tomato, pear, mango, fig, date};

    // https://www/cplusplus.com/reference/algorithm/sort/

    // determine highest (factor) by Calorie
    // convert array of fruits to a vector of fruits
    std::vector<Fruit> fr_vector_cal (fruit_array_sort, fruit_array_sort + 9);
    // sort the vector based on the calorie of each fruit -- see CompCal func at top
    std::sort(fr_vector_cal.begin(), fr_vector_cal.end(), CompCal); // using CompCal helper function
    // iterate through the vector printing out the name of the fruit, and calorie count
    cout << "\n\tList of Fruits by Calorie (Highest to Lowest) " << endl;
    for (auto it = begin (fr_vector_cal); it != end (fr_vector_cal); ++it) { // it is short for iterate
        // uses pointer reference from it to fruit name
        std::cout << "\t\t" << it->get_fruit_name() << " has " << it->get_energy_quantity() << " calories." << endl;
    }

    // determine highest (factor) by Fat
    // convert array of fruits to a vector of fruits
    std::vector<Fruit> fr_vector_fat (fruit_array_sort, fruit_array_sort + 9);
    // sort the vector based on the calorie of each fruit -- see CompFat func at top
    std::sort(fr_vector_fat.begin(), fr_vector_fat.end(), CompFat); // using CompFat helper function
    // iterate through the vector printing out the name of the fruit, and fat count
    cout << "\n\tList of Fruits by Lipids or Fat (Highest to Lowest) " << endl;
    for (auto it = begin (fr_vector_fat); it != end (fr_vector_fat); ++it) { // it is short for iterate
        // uses pointer reference from it to fruit name
        std::cout << "\t\t" << it->get_fruit_name() << " has " << it->get_lipids_quantity() << " fat grams." << endl;
    }

    // determine highest (factor) by Protein
    // convert array of fruits to a vector of fruits
    std::vector<Fruit> fr_vector_pro (fruit_array_sort, fruit_array_sort + 9);
    // sort the vector based on the calorie of each fruit -- see CompFat func at top
    std::sort(fr_vector_pro.begin(), fr_vector_pro.end(), CompPro); // using CompFat helper function
    // iterate through the vector printing out the name of the fruit, and fat count
    cout << "\n\tList of Fruits by Protein (Highest to Lowest) " << endl;
    for (auto it = begin (fr_vector_pro); it != end (fr_vector_pro); ++it) { // it is short for iterate
        // uses pointer reference from it to fruit name
        std::cout << "\t\t" << it->get_fruit_name() << " has " << it->get_protein_quantity() << " protein grams." << endl;
    }

    // determine highest (factor) by Carbs
    // convert array of fruits to a vector of fruits
    std::vector<Fruit> fr_vector_carb (fruit_array_sort, fruit_array_sort + 9);
    // sort the vector based on the calorie of each fruit -- see CompFat func at top
    std::sort(fr_vector_carb.begin(), fr_vector_carb.end(), CompCarb); // using CompFat helper function
    // iterate through the vector printing out the name of the fruit, and fat count
    cout << "\n\tList of Fruits by Carbohydrates (Highest to Lowest) " << endl;
    for (auto it = begin (fr_vector_carb); it != end (fr_vector_carb); ++it) { // it is short for iterate
        // uses pointer reference from it to fruit name
        std::cout << "\t\t" << it->get_fruit_name() << " has " << it->get_carbs_quantity() << " carb grams." << endl;
    }

// How to determine the best fruit
// categories = cal, fat, pro, carbs Compare Fruit to Fruit
    // if any Fruit best in 3 or 4 categories == Superfood
    // Two Fruit which Tie // Each (of two fruits) is best in 2 categories
    // One Fruit has best in two categories, but no other fruit has 2 categories
    // No clear winner, all four categories are won by individual fruits

    if ((high_cal == high_pro) && (high_fat == high_carb) && (high_cal == high_carb)) {
        cout << "The super food is " << high_cal << "." << endl;
    } else if
        ((high_cal == high_pro) && (high_cal == high_carb)) {
            cout << "The super food is " << high_cal << "." << endl;
    } else if
        ((high_pro == high_carb) && (high_pro == high_fat)) {
            cout << "The super food is " << high_cal << "." << endl;
        }


    return 0;
}
