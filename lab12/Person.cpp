#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

// empty constructor
Person::Person(){}

// create person on only birthdate
Person::Person(int birthdate)
  : birth_year{birthdate}
  {}

// create person on birthdate and birthplace
Person::Person(int birthdate, std::string birthplace)
  : birth_year{birthdate}, hometown{birthplace}
  {}

// create person on birthdate, birthplace, and person name
Person::Person(int birthdate, std::string birthplace, std::string yourname)
  : birth_year{birthdate}, hometown{birthplace}, name{yourname}
  {}

void Person::set_birth_year(int birthdate){
  this->birth_year = birthdate;
}
void Person::set_hometown(std::string birthplace){
  this->hometown = birthplace;
}
void Person::set_name(std::string yourname){
  this->name = yourname;
}

int Person::get_birth_year(){
  return this->birth_year;
}
std::string Person::get_hometown(){
  return this->hometown;
}
std::string Person::get_name(){
  return this->name;
}

// print out the Person's data
void Person::print_person_data(){
  cout << "Person Name: " << get_name() << endl;
  cout << "Birthdate: " << get_birth_year() << endl;
  cout << "Birthplace: " << get_hometown() << endl;
}
