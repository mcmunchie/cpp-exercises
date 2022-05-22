/**
 * Code Summary: Math Calculator which allows
 * user to do addition, subtraction, division, multiplication
 * and compute the average of a series of numbers.
*/

#include <iostream>
#include <string>
using namespace std;

// functions declarations:
void addition(int array[], int size);
void subtraction(int array[], int size);
void multiply(int array[], int size);
void divide(int array[], int size);
void average(int array[], int size);
void print_menu();
int take_input();

int main() {
    cout << "Welcome to the Math Calculator!" << endl;
    int user_request = -1;
    while (user_request != 0) {
        print_menu();
        user_request = take_input();
    }
    cout << "\n\tThank you for using the Math Calculator!" << endl;
    return 0;
}

void print_menu() {
    cout << "\tOption 1: Addition" << endl;
    cout << "\tOption 2: Subtraction" << endl;
    cout << "\tOption 3: Multiplication" << endl;
    cout << "\tOption 4: Division" << endl;
    cout << "\tOption 5: Average of Numbers" << endl;
    cout << "\tTo exit enter 0 (zero)" << endl;
}

int take_input() {
    int user_option = -1; // user provided option
    int user_data[] = {0,0}; // array of integers to process
    int data_size = 0; // the size of the array of integers
    int int1, int2;

    // handle the user selection
    cout << "Please select an option: " << endl;
    cin >> user_option; // save user_option as an integer

    if (user_option > 0 and user_option < 6) {
        cout << "Please enter a number: " << endl;
        cin >> int1; // save user option as an integer
        cout << "Please enter another number: " << endl;
        cin >> int2; // save user option as an integer

        data_size = 2; // determine size of the array
        user_data[0] = int1;
        user_data[1] = int2;
        if (user_option == 1) {
            addition(user_data, data_size);
        }
        else if (user_option == 2) {
            subtraction(user_data, data_size);
        }
        else if (user_option == 3) {
            multiply(user_data, data_size);
        }
        else if (user_option == 4) {
            divide(user_data, data_size);
        }
        else if (user_option == 5) {
            average(user_data, data_size);
        }
    }
    else if (user_option < 0 or user_option > 5) {
        cout << "Invalid option, please try again." << endl;
    }
    return user_option;
}

void addition(int data_array[], int data_size) {
    int sum = data_array[0] + data_array[1];
    cout << "\n\t\tThe sum of "<< data_array[0] << " + " << data_array[1] << " = " << sum << endl;
}

void subtraction(int data_array[], int data_size) {
    int diff = data_array[0] - data_array[1];
    cout << "\n\t\tThe difference of "<< data_array[0] << " - " << data_array[1] << " = " << diff << endl;
}

void multiply(int data_array[], int data_size) {
    int product = data_array[0] * data_array[1];
    cout << "\n\t\tThe product of "<< data_array[0] << " * " << data_array[1] << " = " << product << endl;
}

void divide(int data_array[], int data_size) {
    int quotient = data_array[0] / data_array[1];
    cout << "\n\t\tThe quotient of "<< data_array[0] << " / " << data_array[1] << " = " << quotient << endl;
}

void average(int data_array[], int data_size) {
    int sum = 0;
    for (int x = 0; x < data_size; x++) { 
        sum += data_array[x]; 
    }

    double average = sum / data_size;
    cout << "\n\t\tThe average of the numbers entered is " << average << endl;
}
