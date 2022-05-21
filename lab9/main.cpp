#include <iostream>
using namespace std;
#include "Person.h"

int main(){

  Person Person_1;
  Person Person_2(1999);
  Person Person_3(2001, "Busan");
  Person Person_4(2002, "Hawaii", "Hueningkai");

  cout << "Hello, Welcome to Lab 9!" << endl;
  cout << "Person 1 data:" << endl;
  Person_1.print_person_data();
  cout << "\nPerson 2 data:" << endl;
  Person_2.print_person_data();
  cout << "\nPerson 3 data:" << endl;
  Person_3.print_person_data();
  cout << "\nPerson 4 data:" << endl;
  Person_4.print_person_data();

  return 0;

}
