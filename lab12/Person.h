#include <string>
#include <iostream>
using namespace std;

#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H

class Person{
public:
  Person();
  Person(int);
  Person(int, std::string);
  Person(int, std::string, std::string);

  // print out the Person's data
  void print_person_data();

  int get_birth_year();
  std::string get_hometown();
  std::string get_name();

protected:
  void set_birth_year(int);
  void set_hometown(std::string);
  void set_name(std::string);
  
  int birth_year = 2000;
  std::string hometown;
  std::string name;

private:
};

#endif // PERSON_PERSON_H
