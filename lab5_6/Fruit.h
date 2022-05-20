// Fruit.h Class File
// Class file, as a header only for lab 5 and 6 named Fruit.h

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Fruit {

public:
    Fruit(std::string the_name, int base_portion, int cal, float carb, float fat, float prot){
        set_fruit_name(the_name);
        set_portion_quantity(base_portion);
        set_energy_quantity(cal);
        set_carbs_quantity(carb);
        set_lipids_quantity(fat);
        set_protein_quantity(prot);
    }

    void to_string() {
        std::cout << std::fixed << std::setprecision(2);
        cout << "\n\tFruit name: " << get_fruit_name() << endl;
        cout << "\t\tSingle portion size: " << get_portion_size() << " " << get_portion_quantity() << endl;
        cout << "\t\tTotal Calories: " << get_energy_quantity() << " " << get_energy_measure_unit() << endl;
        cout << "\t\tTotal Carbohydrates: " << get_carbs_quantity() << " " << get_carbs_measure_unit() << endl;
        cout << "\t\tTotal Fat: " << get_lipids_quantity() << " " << get_lipids_measure_unit() << endl;
        cout << "\t\tTotal Protein: " << get_protein_quantity() << " " << get_protein_measure_unit() << endl;
    }

    void set_fruit_name(std::string new_name) {
        fruit_name = new_name;
    }

    std::string get_fruit_name() {
        return fruit_name;
    }

    std::string get_portion_size() {
        return portion_size;
    }

    void set_portion_quantity(int portion) {
        portion_quantity = portion;
    }

    int get_portion_quantity() {
        return portion_quantity;
    }

    string get_portion_unit() {
        return portion_unit;
    }

    string get_energy_label() {
        return energy_label;
    }

    void set_energy_quantity(int quantity) {
        energy_quantity = quantity;
    }

    int get_energy_quantity() {
        return energy_quantity;
    }

    string get_energy_measure_unit() {
        return energy_measure_unit;
    }

    string get_protein_label() {
        return protein_label;
    }

    void set_protein_quantity(float quantity) {
        protein_quantity = quantity;
    }

    float get_protein_quantity() {
        return protein_quantity;
    }

    string get_protein_measure_unit() {
        return protein_measure_unit;
    }

    string get_lipids_label() {
        return lipids_label;
    }

    void set_lipids_quantity(float quantity) {
        lipids_quantity = quantity;
    }

    float get_lipids_quantity() {
        return lipids_quantity;
    }

    string get_lipids_measure_unit() {
        return lipids_measure_unit;
    }

    string get_carbs_label() {
        return carbs_label;
    }

    void set_carbs_quantity(float quantity) {
        carbs_quantity = quantity;
    }

    float get_carbs_quantity() {
        return carbs_quantity;
    }

    string get_carbs_measure_unit() {
        return carbs_measure_unit;
    }

private:
    string fruit_name; // this is the name of the food
    string portion_size = "Portion size"; // this label will not change
    int portion_quantity = 100; // one serving in portion_unit may change default = 100
    string portion_unit = "grams"; // this label will not change

    string energy_label = "Energy (Calories)"; // this label will not change
    int energy_quantity; // this should be set by the call to a new object
    string energy_measure_unit = "kcal"; // this label will not change

    string protein_label = "Protein"; // this label will not change
    float protein_quantity; // this should be set by the call to a new object
    string protein_measure_unit = "grams"; // this label will not change

    string lipids_label = "Lipids (fat)"; // this label will not change
    float lipids_quantity; // this should be set by the call to a new object
    string lipids_measure_unit = "grams"; // this label will not change

    string carbs_label = "Carbohydrates (all)"; // this label will not change
    float carbs_quantity; // this should be set by the call to a new object
    string carbs_measure_unit = "grams"; // this label will not change

};
