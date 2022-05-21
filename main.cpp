#include <iostream> // input-output stream library
#include <string>
#include <array>
using namespace std;

// ================================Lab1============================================== //
// Code Summary: this source code file demonstrates the basic structure of a single page CPP application

// the int before the main function parameter is the return type
// int main(){ // can only have one main function per directory
//     // print something to the screen
//     std::cout << "Hello, World!" << std::endl; // using the std library, can remove std in this line

//     // the return type listed below is returning data of 0
//     return 0;
// }

// ================================Lab2============================================== //
// Code Summary: this source code file demonstrates header info, iostream library, std namespace, escape sequences, variable declaration and cin (for variable updates)

// int main(){
//     // Header
//     cout << "\nHello, Welcome to Lab 2!\n" << endl;

//     // iostream library
//     // print a list of the eight objects which can be returned by using iostream
//     cout << "Component iostream\n";
//     cout << "The eight objects returned by iostream are: \n";
//     cout << "\tcin, cout, cerr, clog, wcin, wcout, wcerr, wclog\n";
//     cout << "\tThe link to the docs is: https://en.cppreference.com/w/cpp/header/iostream\n"
//          << endl;

//     // namespace std;
//     // print the include statement needed to use filesystem in cpp
//     cout << "Component filesystem\n";
//     cout << "\tThe include statement for accessing the file system is: #include <filesystem>\n"
//          << endl;

//     // escape sequences
//     cout << "Component escape sequences\n";
//     cout << "The newline escape sequence (\\n) acts like endl.";
//     cout << "\n\tThe tab escape sequence (\\t) indents text.";
//     cout << "\n\t\t Multiple tab escape sequences (\\t\\t) can be used together.\n"
//          << endl;

//     // variable declare
//     cout << "Component variables\n";
//     int one = 1;
//     cout << "\tThe value of the variable named 'one' is: " << one;
//     double one_one = 1.1;
//     cout << "\n\tThe value of the variable named 'one_one' is: " << one_one;
//     char a = 'a'; // "double quotes for strings" myname = "Munch"
//     cout << "\n\tThe value of the variable named 'a' is: " << a;
//     bool tf = true; // true or false
//     cout << "\n\tThe value of the variable named 'tf' is: " << tf << endl;

//     // update variables using cin
//     cout << "\nComponent variable updated using cin\n";
//     // prompt the user with information
//     cout << "\tPlease provide a new value for the variable named 'one': ";
//     // take that info and update a variable
//     cin >> one;
//     // print the updated value of the variable to the screen, confirm update success
//     cout << "\tThe new value in the variable named 'one' is: " << one << "\n";

//     cout << "\n\tPlease provide a new value for the variable named 'a': ";
//     // take that info and update a variable
//     cin >> a;
//     // print the updated value of the variable to the screen, confirm update success
//     cout << "\tThe new value in the variable named 'a' is: " << a << "\n";

//     return 0;
// }

// ================================Lab3============================================== //
// Code Summary: this source code file deals with prompts, functions and strings

// high_low - declare and implement as single block
/**
 * high_low takes two integers, compares them to determine which number is the smallest, and returns the smallest number as an integer.
 * consider creating a variable to save the lowest number, and use this variable as the return value.
 */
// int high_low(int first_number = 1, int second_number = 2){ // if you start using default values, every parameter needs one
//     // if last parameter is assigned a default value, those before it does not need a default value
//     // compare first and second number, save and return the lowest value
//     int lowest;
//     if (first_number == second_number)
//     {
//         lowest = first_number;
//     }
//     else if (first_number < second_number)
//     {
//         lowest = first_number;
//     }
//     else
//     {
//         lowest = second_number;
//     }
//     return lowest;
// }

// // compare_strings - declaration at top
// void compare_strings(string first, string last);

// // string_length - declaration at top
// int string_length(string user_given);

// /**
//  * Main is the primary function for the application, and will be used to manage the flow the user experiences.
//  */
// int main(){
//     cout << "Hello, Welcome to Lab 3!" << endl;

//     // test the high_low function with default values
//     int high_low_is = high_low();
//     cout << "\tCalling high_low default results in: " << high_low_is << endl;

//     // test high_low function with new values
//     int high_low_new = high_low(5, 8);
//     cout << "\tCalling high_low (5,8) with new values is: " << high_low_new << endl;

//     // test the string_length function
//     string f_name, l_name; // setup string vars
//     cout << "\t\tPlease enter your first and last name separated by a space: " << endl;
//     cin >> f_name >> l_name; // get string values from user
//     int f_name_len = string_length(f_name);
//     int l_name_len = string_length(l_name);
//     cout << "\t\tThe length of the first name given is: " << f_name_len << endl;
//     cout << "\t\tThe length of the last name given is: " << l_name_len << endl;

//     // test compare_strings function
//     cout << "\tCalling string_compare with name data: " << endl;
//     compare_strings(f_name, l_name);

//     cout << "\nThank you." << endl;

//     return 0;
// }

// // string_length - implementation at bottom
// /**
//  * string_length takes a single string value and determines the length of that string. The function returns the length as an integer.
//  * consider using the <string> libraries .length() built in function.
//  */
// int string_length(string user_given){
//     // determine the length of the string given, and return the length as an integer to the caller
//     int string_length;
//     string_length = user_given.length();
//     return string_length;
// }

// // compare_strings - implementation at bottom
// /**
//  * string_length takes two strings and calls string_length on both of those values to determine the length of that data. Once the length of both strings is determined (by string_length), the function then calls high_low to determine which string is the shortest. The function prints out a summary of the results, which includes a representation of which string is shortest/longest, as well as what the length of the strings it has received.
//  * this function does not return any data to the caller.
//  */
// void compare_strings(string first, string last){
//     // compare incoming strings using high_low and string_length
//     // print the results of the comparison to the screen
//     // does not need the return keyword, but can be return void();
//     // get length of first and second string
//     int first_len = string_length(first);
//     int second_len = string_length(last);
//     // determine the smallest of the two strings
//     int lowest_value = high_low(first_len, second_len);
//     if (first_len == second_len)
//     {
//         // if same length, tell the user they are the same
//         cout << "\t\tThe names are the same length at " << second_len << " characters long." << endl;
//     }
//     else if (first_len == lowest_value)
//     {
//         // else print the smallest and longest string(s) with their lengths
//         cout << "\t\tThe shortest name is " << first << " at " << first_len << " characters long." << endl;
//         cout << "\t\tThe longest name is " << last << " at " << second_len << " characters long." << endl;
//     }
//     else
//     {
//         cout << "\t\tThe shortest name is " << last << " at " << second_len << " characters long." << endl;
//         cout << "\t\tThe longest name is " << first << " at " << first_len << " characters long." << endl;
//     }
// }

// ================================Lab4============================================== //
// Code Summary: this source code file deals with arrays and loops (for and while loops)

// void print_array(int array_data[], int array_size);
// double return_average(int array_data[], int array_size);
// void reverse_and_print(int array_data[], int array_size);

// int main() {
//     /* The main function is used to create the array which the other functions will manipulate, and to guide the full run of the
//      * program. Each of the other three functions will be called from inside main.
//      */
//     cout << "\nHello, Welcome to Lab 4!\n" << endl;

//     // implement while loop to create array
//     int limit = 11; // static max size of the array
//     int counter = 0; // integer variable used in while loop
//     int array_data[limit]; // bucket for integer data
//     while (counter < limit) {
//         array_data[counter] = counter;
//         counter++;
//     }

//     // call print array to print the data
//     print_array(array_data, counter);

//     // call average function
//     double avg;
//     avg = return_average(array_data, counter);
//     printf("\n\n\tNow computing the averages of the sum of array integers...");
//     printf("\n\t\tThe average of the items in array_data is %.2f", avg); // 55/11 = 5.00 (10+9+8+7+6+5+4+3+2+1=55)

//     // call reverse_and_print function to print reversed array data
//     reverse_and_print(array_data, counter);

//     cout << "\n\nThank you for running Lab 4!\n" << endl;

//     return 0;
// }

// void print_array(int array_data[], int array_size) {
//     /* print_array takes an array and the size as incoming parameters. In the function a for loop iterates through the array, printing
//     * each value of the array found on a separate line. Each line printed should follow the pattern >> array_data[x] value is {value}.
//     * For example "array_data[4] is 4". The function does not return any data to the caller.
//     */
//     printf("\n\n\tThis prints the data from the array using the for loop.");
//     for (int x = 0; x < array_size; x++) {
//         printf("\n\t\tarray_data[%d] value is %d", x, array_data[x]);
//     }
// }

// double return_average(int array_data[], int array_size) {
//     /* This function must use a do-while loop to iterate over the contents of the array, and (with each pass) increment a sum_total variable.
//     * The average of the array is computed by adding each element in the array, and dividing by the number of items in the array.
//     * The value of average is returned to the caller as a double.
//     */
//     double average;
//     int sum_of_array = 0, loop_control = 0;
//     // implement a do-while loop to sum up the integers into a value
//     do {
//         sum_of_array += array_data[loop_control];
//         loop_control++;
//     } while (loop_control < array_size);
//     average = sum_of_array / array_size;
//     return average;
// }

// void reverse_and_print(int array_data[], int array_size) {
//     /* This function should use a single for loop (with incrementers and decrementers properly positioned) that reads the incoming
//      * array and creates a new 'reversed_array' all in a single pass of the data. Once the new array is created, call the print_array
//      * (sending the newly created array to the function) to print out the reversed data.
//      */
//     int array_inverse[array_size];
//     // incrementing and decrementing counters
//     // statement below reads array_data from indexes 1-10, and saves that data
//     // in reverse 10-1, in the array_inverse array.
//     for (int x = 0, y = array_size; x < array_size; x++, y--) {
//         array_inverse[x] = array_data[y - 1];
//     }
//     print_array(array_inverse, array_size);
// }

// ================================Lab5============================================== //

// ================================Lab6============================================== //

// ================================Lab7============================================== //
// Code Summary: this source code file demonstrates the use of variables, references and pointers
// int main() {

//   cout << "Welcome to Lab 7!\n" << endl;

//   // initial variable declaration
//   int my_integer = 11;
//   double my_double = 11.11;
//   string ten_ten = "ten ten";
//   int int_array_five[5] = {0, 1, 2, 3, 4};
//   array<int, 5> std_int_array{10, 11, 12, 13, 14};

//   // print out the value of the variable, and the memory reference location for each variable above
//   cout << "\nInitial variables and their default memory reference locations:" << endl;
//   cout << "\tThe value of my_integer is: " << my_integer << " The memory reference is " << &my_integer << endl;
//   cout << "\tThe value of my_double is: " << my_double << " The memory reference is " << &my_double << endl;
//   cout << "\tThe value of the string ten_ten is: " << ten_ten << " The memory reference is " << &ten_ten << endl;
//   cout << "\tThe values of the array are: " << endl;
//   for (int x = 0; x < 5; x++) {
//     cout << "\t\tThe value of the int_array_five[" << x << "] is: " << int_array_five[x] << " The memory reference is " << &int_array_five[x] << endl;
//   }
//   cout << "\tThe values of the std::array are:" << endl;
//   for (int x = 0; x < 5; x++) {
//     cout << "\t\tThe value of std_int_array[" << x << "] is: " << std_int_array[x] << " The memory reference is " << &std_int_array[x] << endl;
//   }

//   // create a cRef (a variable for each variable)
//   int &my_int_ref{my_integer};
//   double &my_dbl_ref{my_double};
//   string &my_str_ref{ten_ten};
//   int(&my_array_ref)[5] = int_array_five;
//   std::array<int, 5> &std_array_ref = std_int_array;

//   // print out the value of the variable again, but this time with the de-referenced value of the reference
//   cout << "\nInitial variables and their cRef (de-referenced) values:" << endl;
//   cout << "\tThe value of my_integer is: " << my_int_ref << " The memory reference is " << &my_int_ref << "." << endl;
//   cout << "\tThe value of my_double is: " << my_dbl_ref << " The memory reference is " << &my_dbl_ref << "." << endl;
//   cout << "\tThe value of the string ten_ten is: " << my_str_ref << " The memory reference is " << &my_str_ref << "." << endl;
//   cout << "\tThe values of the array are:" << endl;
//   for (int x = 0; x < 5; x++) {
//     cout << "\t\tThe value of int_array_five[" << x << "] is: " << my_array_ref[x] << " The memory reference is: " << &my_array_ref[x] << "." << endl;
//   }
//   for (int x = 0; x < 5; x++) {
//     cout << "\t\tThe value of std_int_array[" << x << "] is: " << std_array_ref[x] << " The memory reference is " << &std_array_ref[x] << "." << endl;
//   }

//   // create a pointer variable (a variable that points to a location in memory for each initial variable)
//   int *my_int_ptr = &my_integer;
//   double *my_dbl_ptr = &my_double;
//   string *my_str_ptr = &ten_ten;
//   int *my_array_ptr = int_array_five;
//   int *std_array_ptr = std_int_array.data();

//   // print out the value of the variable again, and this time to the native pointer from above (no extra syntax)
//   cout << "\nInitial variables and their pointer (de-referenced) values:" << endl;
//   cout << "\tThe value of my_integer is: " << *my_int_ptr << " The memory reference is " << my_int_ptr << "." << endl;
//   cout << "\tThe value of my_double is: " << *my_dbl_ptr << " The memory reference is " << my_dbl_ptr << "." << endl;
//   cout << "\tThe value of the string ten_ten is: " << *my_str_ptr << " The memory reference is " << my_str_ptr << "." << endl;
//   cout << "\tThe values of the array are:" << endl;
//   for (int x = 0; x < 5; x++) {
//     cout << "\t\tThe value of my_array_ptr[" << x << "] is: " << my_array_ptr[x] << " The pointer value is: " << &my_array_ptr << "." << endl;
//   }
//   for (int x = 0; x < 5; x++) {
//     cout << "\t\tThe value of std_int_array[" << x << "] is: " << std_array_ptr[x] << " The memory reference is " << &std_array_ptr << "." << endl;
//   }

//   return 0;
  
// }

// ================================Lab8============================================== //
// Code Summary: this source code file demonstrates using variables, references and pointers

void take_simple_variable(int);
void take_simple_variable(double);
void take_simple_variable(string);
void take_simple_variable(int array[]);

template<size_t N> // passes size of the array in (size, variable)
void take_simple_variable(std::array<int, N> &std_int_array) {
  cout << "\ttake_simple(std::array[]) received values are: " << endl;
  for (int x = 0; x < 5; x++) { // can replace 5 with N to declare size
    cout << "\t\tThe value of std:array[" << x << "] is: " << std_int_array[x] << " at loc " << &std_int_array[x] << endl;
  }
}

void take_reference_variable(int);
void take_reference_variable(double);
void take_reference_variable(string);
void take_reference_variable(int array[]);

template<size_t N>
void take_reference_variable(std::array<int, N> &std_int_array) {
  cout << "\ttake_simple(std::array[]) received values are: " << endl;
  for (int x = 0; x < 5; x++) {
    cout << "\t\tThe value of std:array[" << x << "] is: " << std_int_array[x] << " at loc " << &std_int_array[x] << endl;
  }
}

void take_pointer_variable(int);
void take_pointer_variable(double);
void take_pointer_variable(string);
void take_pointer_variable(int array[]);

template<size_t N>
void take_pointer_variable(std::array<int, N> &std_array_ptr) {
  cout << "\ttake_simple(std::array[]) received values are: " << endl;
  for (int x = 0; x < 5; x++) {
    cout << "\t\tThe value of std:array[" << x << "] is: " << std_array_ptr[x] << " at loc " << &std_array_ptr[x] << endl;
  }
}

int main(){

  cout << "Welcome to lab 8!" << endl;

  // initial variable declaration
  int my_integer = 11;
  double my_double = 11.11;
  string munch_munch = "munch munch";
  int int_array_five[5] = {0,1,2,3,4};
  std::array<int, 5> std_int_array{{10,11,12,13,14}};

  cout << "\n Calls to 'take_simple_variable() functions follow:" << endl;
  take_simple_variable(my_integer);
  take_simple_variable(my_double);
  take_simple_variable(munch_munch);
  take_simple_variable(int_array_five);
  take_simple_variable<5>(std_int_array);

  // create a cRef (a variable for each variable)
  int& my_int_ref{my_integer};
  double &my_dbl_ref{my_double};
  string & my_str_ref{munch_munch};
  int (&my_array_ref)[5] = int_array_five;
  std::array<int, 5>& std_array_ref = std_int_array;

  // call overloaded functions passing in appropriate values
  cout << "\n Calls to 'take_reference_variable() functions follow:" << endl;
  take_reference_variable(my_int_ref);
  take_reference_variable(my_dbl_ref);
  take_reference_variable(my_str_ref);
  take_reference_variable(my_array_ref);
  take_reference_variable<5>(std_array_ref);

  // create a pointer variable (a variable that points to a location in memory for each initial variable)
  int* my_int_ptr = &my_integer;
  double *my_dbl_ptr = &my_double;
  string * my_str_ptr = &munch_munch;
  int* my_array_ptr = int_array_five;
  // std_int_array is already a pointer; no need to recast
  // int* std_array_ptr = std_int_array.data(); is already a pointer

  cout << "\n Calls to 'take_pointer_variable() functions follow:" << endl;
  take_pointer_variable(*my_int_ptr);
  take_pointer_variable(*my_dbl_ptr);
  take_pointer_variable(*my_str_ptr);
  take_pointer_variable(my_array_ptr);
  take_pointer_variable<5>(std_int_array);

  return 0;
}

void take_simple_variable(int int_value) {
  cout << "\ttake_simple(int) received is " << int_value << " at memory loc " << &int_value << endl;
}

void take_simple_variable(double dbl_value) {
  cout << "\ttake_simple(double) received is " << dbl_value << " at memory loc " << &dbl_value << endl;
}

void take_simple_variable(string str_value) {
  cout << "\ttake_simple(std::string) received is " << str_value << " at memory loc " << &str_value << endl;
}

void take_simple_variable(int int_array[]) {
  cout << "\ttake_simple(int_array[]) received values are " << endl;
  for (int x = 0; x < 5; x++) {
    cout << "\t\tThe value of int_array[" << x << "] is: " << int_array[x] << " at loc " << &int_array[x] << endl;
  }
}

void take_reference_variable(int int_ref) {
  cout << "\ttake_reference(int) received is " << int_ref << " at memory loc " << &int_ref << endl;
}

void take_reference_variable(double dbl_ref) {
  cout << "\ttake_reference(double) received is " << dbl_ref << " at memory loc " << &dbl_ref << endl;
}

void take_reference_variable(std::string str_ref) {
  cout << "\ttake_reference(std::string) received is " << str_ref << " at memory loc " << &str_ref << endl;
}

void take_reference_variable(int array_ref[]) {
  cout << "\ttake_reference(array_ref[]) received values are " << endl;
  for (int x = 0; x < 5; x++) {
    cout << "\t\tThe value of array_ref[" << x << "] is: " << array_ref[x] << " at loc " << &array_ref[x] << endl;
  }
}

void take_pointer_variable(int int_ptr) {
  cout << "\ttake_pointer(int) received is " << int_ptr << " at memory loc " << &int_ptr << endl;
}

void take_pointer_variable(double dbl_ptr) {
  cout << "\ttake_pointer(double) received is " << dbl_ptr << " at memory loc " << &dbl_ptr << endl;
}

void take_pointer_variable(std::string str_ptr) {
  cout << "\ttake_pointer(std::string) received is " << str_ptr << " at memory loc " << &str_ptr << endl;
}

void take_pointer_variable(int array_ptr[]) {
  cout << "\ttake_pointer(array_ptr[]) received values are " << endl;
  for (int x = 0; x < 5; x++) {
    cout << "\t\tThe value of array_ptr[" << x << "] is: " << array_ptr[x] << " at loc " << &array_ptr[x] << endl;
  }
}
